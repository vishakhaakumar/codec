--
-- Autogenerated by Thrift
--
-- DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
-- @generated
--


require 'Thrift'
require 'media_service_ttypes'

MovieInfoServicesClient = __TObject.new(__TClient, {
  __type = 'MovieInfoServicesClient'
})

function MovieInfoServicesClient:GetMoviesByIds(movie_ids)
  self:send_GetMoviesByIds(movie_ids)
  return self:recv_GetMoviesByIds(movie_ids)
end

function MovieInfoServicesClient:send_GetMoviesByIds(movie_ids)
  self.oprot:writeMessageBegin('GetMoviesByIds', TMessageType.CALL, self._seqid)
  local args = GetMoviesByIds_args:new{}
  args.movie_ids = movie_ids
  args:write(self.oprot)
  self.oprot:writeMessageEnd()
  self.oprot.trans:flush()
end

function MovieInfoServicesClient:recv_GetMoviesByIds(movie_ids)
  local fname, mtype, rseqid = self.iprot:readMessageBegin()
  if mtype == TMessageType.EXCEPTION then
    local x = TApplicationException:new{}
    x:read(self.iprot)
    self.iprot:readMessageEnd()
    error(x)
  end
  local result = GetMoviesByIds_result:new{}
  result:read(self.iprot)
  self.iprot:readMessageEnd()
  if result.success ~= nil then
    return result.success
  end
  error(TApplicationException:new{errorCode = TApplicationException.MISSING_RESULT})
end
MovieInfoServicesIface = __TObject:new{
  __type = 'MovieInfoServicesIface'
}


MovieInfoServicesProcessor = __TObject.new(__TProcessor
, {
 __type = 'MovieInfoServicesProcessor'
})

function MovieInfoServicesProcessor:process(iprot, oprot, server_ctx)
  local name, mtype, seqid = iprot:readMessageBegin()
  local func_name = 'process_' .. name
  if not self[func_name] or ttype(self[func_name]) ~= 'function' then
    if oprot ~= nil then
      iprot:skip(TType.STRUCT)
      iprot:readMessageEnd()
      x = TApplicationException:new{
        errorCode = TApplicationException.UNKNOWN_METHOD
      }
      oprot:writeMessageBegin(name, TMessageType.EXCEPTION, seqid)
      x:write(oprot)
      oprot:writeMessageEnd()
      oprot.trans:flush()
    end
    return false, 'Unknown function '..name
  else
    return self[func_name](self, seqid, iprot, oprot, server_ctx)
  end
end

function MovieInfoServicesProcessor:process_GetMoviesByIds(seqid, iprot, oprot, server_ctx)
  local args = GetMoviesByIds_args:new{}
  local reply_type = TMessageType.REPLY
  args:read(iprot)
  iprot:readMessageEnd()
  local result = GetMoviesByIds_result:new{}
  local status, res = pcall(self.handler.GetMoviesByIds, self.handler, args.movie_ids)
  if not status then
    reply_type = TMessageType.EXCEPTION
    result = TApplicationException:new{message = res}
  else
    result.success = res
  end
  oprot:writeMessageBegin('GetMoviesByIds', reply_type, seqid)
  result:write(oprot)
  oprot:writeMessageEnd()
  oprot.trans:flush()
  return status, res
end

-- HELPER FUNCTIONS AND STRUCTURES

GetMoviesByIds_args = __TObject:new{
  movie_ids
}

function GetMoviesByIds_args:read(iprot)
  iprot:readStructBegin()
  while true do
    local fname, ftype, fid = iprot:readFieldBegin()
    if ftype == TType.STOP then
      break
    elseif fid == 1 then
      if ftype == TType.LIST then
        self.movie_ids = {}
        local _etype93, _size90 = iprot:readListBegin()
        for _i=1,_size90 do
          local _elem94 = iprot:readString()
          table.insert(self.movie_ids, _elem94)
        end
        iprot:readListEnd()
      else
        iprot:skip(ftype)
      end
    else
      iprot:skip(ftype)
    end
    iprot:readFieldEnd()
  end
  iprot:readStructEnd()
end

function GetMoviesByIds_args:write(oprot)
  oprot:writeStructBegin('GetMoviesByIds_args')
  if self.movie_ids ~= nil then
    oprot:writeFieldBegin('movie_ids', TType.LIST, 1)
    oprot:writeListBegin(TType.STRING, #self.movie_ids)
    for _,iter95 in ipairs(self.movie_ids) do
      oprot:writeString(iter95)
    end
    oprot:writeListEnd()
    oprot:writeFieldEnd()
  end
  oprot:writeFieldStop()
  oprot:writeStructEnd()
end

GetMoviesByIds_result = __TObject:new{
  success
}

function GetMoviesByIds_result:read(iprot)
  iprot:readStructBegin()
  while true do
    local fname, ftype, fid = iprot:readFieldBegin()
    if ftype == TType.STOP then
      break
    elseif fid == 0 then
      if ftype == TType.LIST then
        self.success = {}
        local _etype99, _size96 = iprot:readListBegin()
        for _i=1,_size96 do
          local _elem100 = iprot:readString()
          table.insert(self.success, _elem100)
        end
        iprot:readListEnd()
      else
        iprot:skip(ftype)
      end
    else
      iprot:skip(ftype)
    end
    iprot:readFieldEnd()
  end
  iprot:readStructEnd()
end

function GetMoviesByIds_result:write(oprot)
  oprot:writeStructBegin('GetMoviesByIds_result')
  if self.success ~= nil then
    oprot:writeFieldBegin('success', TType.LIST, 0)
    oprot:writeListBegin(TType.STRING, #self.success)
    for _,iter101 in ipairs(self.success) do
      oprot:writeString(iter101)
    end
    oprot:writeListEnd()
    oprot:writeFieldEnd()
  end
  oprot:writeFieldStop()
  oprot:writeStructEnd()
end