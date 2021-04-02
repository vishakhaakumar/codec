/**
 * Autogenerated by Thrift Compiler (0.14.0)
 *
 * DO NOT EDIT UNLESS YOU ARE SURE THAT YOU KNOW WHAT YOU ARE DOING
 *  @generated
 */
#ifndef MovieInfoService_H
#define MovieInfoService_H

#include <thrift/TDispatchProcessor.h>
#include <thrift/async/TConcurrentClientSyncInfo.h>
#include <memory>
#include "media_service_types.h"

namespace media_service {

#ifdef _MSC_VER
  #pragma warning( push )
  #pragma warning (disable : 4250 ) //inheriting methods via dominance 
#endif

class MovieInfoServiceIf {
 public:
  virtual ~MovieInfoServiceIf() {}
  virtual void WriteMovieInfo(const int64_t req_id, const std::string& movie_id, const std::string& title, const std::vector<Cast> & casts, const int64_t plot_id, const std::vector<std::string> & thumbnail_ids, const std::vector<std::string> & photo_ids, const std::vector<std::string> & video_ids, const std::string& avg_rating, const int32_t num_rating, const std::map<std::string, std::string> & carrier) = 0;
  virtual void ReadMovieInfo(MovieInfo& _return, const int64_t req_id, const std::string& movie_id, const std::map<std::string, std::string> & carrier) = 0;
  virtual void UpdateRating(const int64_t req_id, const std::string& movie_id, const int32_t sum_uncommitted_rating, const int32_t num_uncommitted_rating, const std::map<std::string, std::string> & carrier) = 0;
};

class MovieInfoServiceIfFactory {
 public:
  typedef MovieInfoServiceIf Handler;

  virtual ~MovieInfoServiceIfFactory() {}

  virtual MovieInfoServiceIf* getHandler(const ::apache::thrift::TConnectionInfo& connInfo) = 0;
  virtual void releaseHandler(MovieInfoServiceIf* /* handler */) = 0;
};

class MovieInfoServiceIfSingletonFactory : virtual public MovieInfoServiceIfFactory {
 public:
  MovieInfoServiceIfSingletonFactory(const ::std::shared_ptr<MovieInfoServiceIf>& iface) : iface_(iface) {}
  virtual ~MovieInfoServiceIfSingletonFactory() {}

  virtual MovieInfoServiceIf* getHandler(const ::apache::thrift::TConnectionInfo&) {
    return iface_.get();
  }
  virtual void releaseHandler(MovieInfoServiceIf* /* handler */) {}

 protected:
  ::std::shared_ptr<MovieInfoServiceIf> iface_;
};

class MovieInfoServiceNull : virtual public MovieInfoServiceIf {
 public:
  virtual ~MovieInfoServiceNull() {}
  void WriteMovieInfo(const int64_t /* req_id */, const std::string& /* movie_id */, const std::string& /* title */, const std::vector<Cast> & /* casts */, const int64_t /* plot_id */, const std::vector<std::string> & /* thumbnail_ids */, const std::vector<std::string> & /* photo_ids */, const std::vector<std::string> & /* video_ids */, const std::string& /* avg_rating */, const int32_t /* num_rating */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
  void ReadMovieInfo(MovieInfo& /* _return */, const int64_t /* req_id */, const std::string& /* movie_id */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
  void UpdateRating(const int64_t /* req_id */, const std::string& /* movie_id */, const int32_t /* sum_uncommitted_rating */, const int32_t /* num_uncommitted_rating */, const std::map<std::string, std::string> & /* carrier */) {
    return;
  }
};

typedef struct _MovieInfoService_WriteMovieInfo_args__isset {
  _MovieInfoService_WriteMovieInfo_args__isset() : req_id(false), movie_id(false), title(false), casts(false), plot_id(false), thumbnail_ids(false), photo_ids(false), video_ids(false), avg_rating(false), num_rating(false), carrier(false) {}
  bool req_id :1;
  bool movie_id :1;
  bool title :1;
  bool casts :1;
  bool plot_id :1;
  bool thumbnail_ids :1;
  bool photo_ids :1;
  bool video_ids :1;
  bool avg_rating :1;
  bool num_rating :1;
  bool carrier :1;
} _MovieInfoService_WriteMovieInfo_args__isset;

class MovieInfoService_WriteMovieInfo_args {
 public:

  MovieInfoService_WriteMovieInfo_args(const MovieInfoService_WriteMovieInfo_args&);
  MovieInfoService_WriteMovieInfo_args& operator=(const MovieInfoService_WriteMovieInfo_args&);
  MovieInfoService_WriteMovieInfo_args() : req_id(0), movie_id(), title(), plot_id(0), avg_rating(), num_rating(0) {
  }

  virtual ~MovieInfoService_WriteMovieInfo_args() noexcept;
  int64_t req_id;
  std::string movie_id;
  std::string title;
  std::vector<Cast>  casts;
  int64_t plot_id;
  std::vector<std::string>  thumbnail_ids;
  std::vector<std::string>  photo_ids;
  std::vector<std::string>  video_ids;
  std::string avg_rating;
  int32_t num_rating;
  std::map<std::string, std::string>  carrier;

  _MovieInfoService_WriteMovieInfo_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_movie_id(const std::string& val);

  void __set_title(const std::string& val);

  void __set_casts(const std::vector<Cast> & val);

  void __set_plot_id(const int64_t val);

  void __set_thumbnail_ids(const std::vector<std::string> & val);

  void __set_photo_ids(const std::vector<std::string> & val);

  void __set_video_ids(const std::vector<std::string> & val);

  void __set_avg_rating(const std::string& val);

  void __set_num_rating(const int32_t val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const MovieInfoService_WriteMovieInfo_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(movie_id == rhs.movie_id))
      return false;
    if (!(title == rhs.title))
      return false;
    if (!(casts == rhs.casts))
      return false;
    if (!(plot_id == rhs.plot_id))
      return false;
    if (!(thumbnail_ids == rhs.thumbnail_ids))
      return false;
    if (!(photo_ids == rhs.photo_ids))
      return false;
    if (!(video_ids == rhs.video_ids))
      return false;
    if (!(avg_rating == rhs.avg_rating))
      return false;
    if (!(num_rating == rhs.num_rating))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const MovieInfoService_WriteMovieInfo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MovieInfoService_WriteMovieInfo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MovieInfoService_WriteMovieInfo_pargs {
 public:


  virtual ~MovieInfoService_WriteMovieInfo_pargs() noexcept;
  const int64_t* req_id;
  const std::string* movie_id;
  const std::string* title;
  const std::vector<Cast> * casts;
  const int64_t* plot_id;
  const std::vector<std::string> * thumbnail_ids;
  const std::vector<std::string> * photo_ids;
  const std::vector<std::string> * video_ids;
  const std::string* avg_rating;
  const int32_t* num_rating;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MovieInfoService_WriteMovieInfo_result__isset {
  _MovieInfoService_WriteMovieInfo_result__isset() : se(false) {}
  bool se :1;
} _MovieInfoService_WriteMovieInfo_result__isset;

class MovieInfoService_WriteMovieInfo_result {
 public:

  MovieInfoService_WriteMovieInfo_result(const MovieInfoService_WriteMovieInfo_result&);
  MovieInfoService_WriteMovieInfo_result& operator=(const MovieInfoService_WriteMovieInfo_result&);
  MovieInfoService_WriteMovieInfo_result() {
  }

  virtual ~MovieInfoService_WriteMovieInfo_result() noexcept;
  ServiceException se;

  _MovieInfoService_WriteMovieInfo_result__isset __isset;

  void __set_se(const ServiceException& val);

  bool operator == (const MovieInfoService_WriteMovieInfo_result & rhs) const
  {
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const MovieInfoService_WriteMovieInfo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MovieInfoService_WriteMovieInfo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MovieInfoService_WriteMovieInfo_presult__isset {
  _MovieInfoService_WriteMovieInfo_presult__isset() : se(false) {}
  bool se :1;
} _MovieInfoService_WriteMovieInfo_presult__isset;

class MovieInfoService_WriteMovieInfo_presult {
 public:


  virtual ~MovieInfoService_WriteMovieInfo_presult() noexcept;
  ServiceException se;

  _MovieInfoService_WriteMovieInfo_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _MovieInfoService_ReadMovieInfo_args__isset {
  _MovieInfoService_ReadMovieInfo_args__isset() : req_id(false), movie_id(false), carrier(false) {}
  bool req_id :1;
  bool movie_id :1;
  bool carrier :1;
} _MovieInfoService_ReadMovieInfo_args__isset;

class MovieInfoService_ReadMovieInfo_args {
 public:

  MovieInfoService_ReadMovieInfo_args(const MovieInfoService_ReadMovieInfo_args&);
  MovieInfoService_ReadMovieInfo_args& operator=(const MovieInfoService_ReadMovieInfo_args&);
  MovieInfoService_ReadMovieInfo_args() : req_id(0), movie_id() {
  }

  virtual ~MovieInfoService_ReadMovieInfo_args() noexcept;
  int64_t req_id;
  std::string movie_id;
  std::map<std::string, std::string>  carrier;

  _MovieInfoService_ReadMovieInfo_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_movie_id(const std::string& val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const MovieInfoService_ReadMovieInfo_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(movie_id == rhs.movie_id))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const MovieInfoService_ReadMovieInfo_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MovieInfoService_ReadMovieInfo_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MovieInfoService_ReadMovieInfo_pargs {
 public:


  virtual ~MovieInfoService_ReadMovieInfo_pargs() noexcept;
  const int64_t* req_id;
  const std::string* movie_id;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MovieInfoService_ReadMovieInfo_result__isset {
  _MovieInfoService_ReadMovieInfo_result__isset() : success(false), se(false) {}
  bool success :1;
  bool se :1;
} _MovieInfoService_ReadMovieInfo_result__isset;

class MovieInfoService_ReadMovieInfo_result {
 public:

  MovieInfoService_ReadMovieInfo_result(const MovieInfoService_ReadMovieInfo_result&);
  MovieInfoService_ReadMovieInfo_result& operator=(const MovieInfoService_ReadMovieInfo_result&);
  MovieInfoService_ReadMovieInfo_result() {
  }

  virtual ~MovieInfoService_ReadMovieInfo_result() noexcept;
  MovieInfo success;
  ServiceException se;

  _MovieInfoService_ReadMovieInfo_result__isset __isset;

  void __set_success(const MovieInfo& val);

  void __set_se(const ServiceException& val);

  bool operator == (const MovieInfoService_ReadMovieInfo_result & rhs) const
  {
    if (!(success == rhs.success))
      return false;
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const MovieInfoService_ReadMovieInfo_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MovieInfoService_ReadMovieInfo_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MovieInfoService_ReadMovieInfo_presult__isset {
  _MovieInfoService_ReadMovieInfo_presult__isset() : success(false), se(false) {}
  bool success :1;
  bool se :1;
} _MovieInfoService_ReadMovieInfo_presult__isset;

class MovieInfoService_ReadMovieInfo_presult {
 public:


  virtual ~MovieInfoService_ReadMovieInfo_presult() noexcept;
  MovieInfo* success;
  ServiceException se;

  _MovieInfoService_ReadMovieInfo_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

typedef struct _MovieInfoService_UpdateRating_args__isset {
  _MovieInfoService_UpdateRating_args__isset() : req_id(false), movie_id(false), sum_uncommitted_rating(false), num_uncommitted_rating(false), carrier(false) {}
  bool req_id :1;
  bool movie_id :1;
  bool sum_uncommitted_rating :1;
  bool num_uncommitted_rating :1;
  bool carrier :1;
} _MovieInfoService_UpdateRating_args__isset;

class MovieInfoService_UpdateRating_args {
 public:

  MovieInfoService_UpdateRating_args(const MovieInfoService_UpdateRating_args&);
  MovieInfoService_UpdateRating_args& operator=(const MovieInfoService_UpdateRating_args&);
  MovieInfoService_UpdateRating_args() : req_id(0), movie_id(), sum_uncommitted_rating(0), num_uncommitted_rating(0) {
  }

  virtual ~MovieInfoService_UpdateRating_args() noexcept;
  int64_t req_id;
  std::string movie_id;
  int32_t sum_uncommitted_rating;
  int32_t num_uncommitted_rating;
  std::map<std::string, std::string>  carrier;

  _MovieInfoService_UpdateRating_args__isset __isset;

  void __set_req_id(const int64_t val);

  void __set_movie_id(const std::string& val);

  void __set_sum_uncommitted_rating(const int32_t val);

  void __set_num_uncommitted_rating(const int32_t val);

  void __set_carrier(const std::map<std::string, std::string> & val);

  bool operator == (const MovieInfoService_UpdateRating_args & rhs) const
  {
    if (!(req_id == rhs.req_id))
      return false;
    if (!(movie_id == rhs.movie_id))
      return false;
    if (!(sum_uncommitted_rating == rhs.sum_uncommitted_rating))
      return false;
    if (!(num_uncommitted_rating == rhs.num_uncommitted_rating))
      return false;
    if (!(carrier == rhs.carrier))
      return false;
    return true;
  }
  bool operator != (const MovieInfoService_UpdateRating_args &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MovieInfoService_UpdateRating_args & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};


class MovieInfoService_UpdateRating_pargs {
 public:


  virtual ~MovieInfoService_UpdateRating_pargs() noexcept;
  const int64_t* req_id;
  const std::string* movie_id;
  const int32_t* sum_uncommitted_rating;
  const int32_t* num_uncommitted_rating;
  const std::map<std::string, std::string> * carrier;

  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MovieInfoService_UpdateRating_result__isset {
  _MovieInfoService_UpdateRating_result__isset() : se(false) {}
  bool se :1;
} _MovieInfoService_UpdateRating_result__isset;

class MovieInfoService_UpdateRating_result {
 public:

  MovieInfoService_UpdateRating_result(const MovieInfoService_UpdateRating_result&);
  MovieInfoService_UpdateRating_result& operator=(const MovieInfoService_UpdateRating_result&);
  MovieInfoService_UpdateRating_result() {
  }

  virtual ~MovieInfoService_UpdateRating_result() noexcept;
  ServiceException se;

  _MovieInfoService_UpdateRating_result__isset __isset;

  void __set_se(const ServiceException& val);

  bool operator == (const MovieInfoService_UpdateRating_result & rhs) const
  {
    if (!(se == rhs.se))
      return false;
    return true;
  }
  bool operator != (const MovieInfoService_UpdateRating_result &rhs) const {
    return !(*this == rhs);
  }

  bool operator < (const MovieInfoService_UpdateRating_result & ) const;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);
  uint32_t write(::apache::thrift::protocol::TProtocol* oprot) const;

};

typedef struct _MovieInfoService_UpdateRating_presult__isset {
  _MovieInfoService_UpdateRating_presult__isset() : se(false) {}
  bool se :1;
} _MovieInfoService_UpdateRating_presult__isset;

class MovieInfoService_UpdateRating_presult {
 public:


  virtual ~MovieInfoService_UpdateRating_presult() noexcept;
  ServiceException se;

  _MovieInfoService_UpdateRating_presult__isset __isset;

  uint32_t read(::apache::thrift::protocol::TProtocol* iprot);

};

class MovieInfoServiceClient : virtual public MovieInfoServiceIf {
 public:
  MovieInfoServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
    setProtocol(prot);
  }
  MovieInfoServiceClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void WriteMovieInfo(const int64_t req_id, const std::string& movie_id, const std::string& title, const std::vector<Cast> & casts, const int64_t plot_id, const std::vector<std::string> & thumbnail_ids, const std::vector<std::string> & photo_ids, const std::vector<std::string> & video_ids, const std::string& avg_rating, const int32_t num_rating, const std::map<std::string, std::string> & carrier);
  void send_WriteMovieInfo(const int64_t req_id, const std::string& movie_id, const std::string& title, const std::vector<Cast> & casts, const int64_t plot_id, const std::vector<std::string> & thumbnail_ids, const std::vector<std::string> & photo_ids, const std::vector<std::string> & video_ids, const std::string& avg_rating, const int32_t num_rating, const std::map<std::string, std::string> & carrier);
  void recv_WriteMovieInfo();
  void ReadMovieInfo(MovieInfo& _return, const int64_t req_id, const std::string& movie_id, const std::map<std::string, std::string> & carrier);
  void send_ReadMovieInfo(const int64_t req_id, const std::string& movie_id, const std::map<std::string, std::string> & carrier);
  void recv_ReadMovieInfo(MovieInfo& _return);
  void UpdateRating(const int64_t req_id, const std::string& movie_id, const int32_t sum_uncommitted_rating, const int32_t num_uncommitted_rating, const std::map<std::string, std::string> & carrier);
  void send_UpdateRating(const int64_t req_id, const std::string& movie_id, const int32_t sum_uncommitted_rating, const int32_t num_uncommitted_rating, const std::map<std::string, std::string> & carrier);
  void recv_UpdateRating();
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
};

class MovieInfoServiceProcessor : public ::apache::thrift::TDispatchProcessor {
 protected:
  ::std::shared_ptr<MovieInfoServiceIf> iface_;
  virtual bool dispatchCall(::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, const std::string& fname, int32_t seqid, void* callContext);
 private:
  typedef  void (MovieInfoServiceProcessor::*ProcessFunction)(int32_t, ::apache::thrift::protocol::TProtocol*, ::apache::thrift::protocol::TProtocol*, void*);
  typedef std::map<std::string, ProcessFunction> ProcessMap;
  ProcessMap processMap_;
  void process_WriteMovieInfo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_ReadMovieInfo(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
  void process_UpdateRating(int32_t seqid, ::apache::thrift::protocol::TProtocol* iprot, ::apache::thrift::protocol::TProtocol* oprot, void* callContext);
 public:
  MovieInfoServiceProcessor(::std::shared_ptr<MovieInfoServiceIf> iface) :
    iface_(iface) {
    processMap_["WriteMovieInfo"] = &MovieInfoServiceProcessor::process_WriteMovieInfo;
    processMap_["ReadMovieInfo"] = &MovieInfoServiceProcessor::process_ReadMovieInfo;
    processMap_["UpdateRating"] = &MovieInfoServiceProcessor::process_UpdateRating;
  }

  virtual ~MovieInfoServiceProcessor() {}
};

class MovieInfoServiceProcessorFactory : public ::apache::thrift::TProcessorFactory {
 public:
  MovieInfoServiceProcessorFactory(const ::std::shared_ptr< MovieInfoServiceIfFactory >& handlerFactory) :
      handlerFactory_(handlerFactory) {}

  ::std::shared_ptr< ::apache::thrift::TProcessor > getProcessor(const ::apache::thrift::TConnectionInfo& connInfo);

 protected:
  ::std::shared_ptr< MovieInfoServiceIfFactory > handlerFactory_;
};

class MovieInfoServiceMultiface : virtual public MovieInfoServiceIf {
 public:
  MovieInfoServiceMultiface(std::vector<std::shared_ptr<MovieInfoServiceIf> >& ifaces) : ifaces_(ifaces) {
  }
  virtual ~MovieInfoServiceMultiface() {}
 protected:
  std::vector<std::shared_ptr<MovieInfoServiceIf> > ifaces_;
  MovieInfoServiceMultiface() {}
  void add(::std::shared_ptr<MovieInfoServiceIf> iface) {
    ifaces_.push_back(iface);
  }
 public:
  void WriteMovieInfo(const int64_t req_id, const std::string& movie_id, const std::string& title, const std::vector<Cast> & casts, const int64_t plot_id, const std::vector<std::string> & thumbnail_ids, const std::vector<std::string> & photo_ids, const std::vector<std::string> & video_ids, const std::string& avg_rating, const int32_t num_rating, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->WriteMovieInfo(req_id, movie_id, title, casts, plot_id, thumbnail_ids, photo_ids, video_ids, avg_rating, num_rating, carrier);
    }
    ifaces_[i]->WriteMovieInfo(req_id, movie_id, title, casts, plot_id, thumbnail_ids, photo_ids, video_ids, avg_rating, num_rating, carrier);
  }

  void ReadMovieInfo(MovieInfo& _return, const int64_t req_id, const std::string& movie_id, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->ReadMovieInfo(_return, req_id, movie_id, carrier);
    }
    ifaces_[i]->ReadMovieInfo(_return, req_id, movie_id, carrier);
    return;
  }

  void UpdateRating(const int64_t req_id, const std::string& movie_id, const int32_t sum_uncommitted_rating, const int32_t num_uncommitted_rating, const std::map<std::string, std::string> & carrier) {
    size_t sz = ifaces_.size();
    size_t i = 0;
    for (; i < (sz - 1); ++i) {
      ifaces_[i]->UpdateRating(req_id, movie_id, sum_uncommitted_rating, num_uncommitted_rating, carrier);
    }
    ifaces_[i]->UpdateRating(req_id, movie_id, sum_uncommitted_rating, num_uncommitted_rating, carrier);
  }

};

// The 'concurrent' client is a thread safe client that correctly handles
// out of order responses.  It is slower than the regular client, so should
// only be used when you need to share a connection among multiple threads
class MovieInfoServiceConcurrentClient : virtual public MovieInfoServiceIf {
 public:
  MovieInfoServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(prot);
  }
  MovieInfoServiceConcurrentClient(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot, std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync) : sync_(sync)
{
    setProtocol(iprot,oprot);
  }
 private:
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> prot) {
  setProtocol(prot,prot);
  }
  void setProtocol(std::shared_ptr< ::apache::thrift::protocol::TProtocol> iprot, std::shared_ptr< ::apache::thrift::protocol::TProtocol> oprot) {
    piprot_=iprot;
    poprot_=oprot;
    iprot_ = iprot.get();
    oprot_ = oprot.get();
  }
 public:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getInputProtocol() {
    return piprot_;
  }
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> getOutputProtocol() {
    return poprot_;
  }
  void WriteMovieInfo(const int64_t req_id, const std::string& movie_id, const std::string& title, const std::vector<Cast> & casts, const int64_t plot_id, const std::vector<std::string> & thumbnail_ids, const std::vector<std::string> & photo_ids, const std::vector<std::string> & video_ids, const std::string& avg_rating, const int32_t num_rating, const std::map<std::string, std::string> & carrier);
  int32_t send_WriteMovieInfo(const int64_t req_id, const std::string& movie_id, const std::string& title, const std::vector<Cast> & casts, const int64_t plot_id, const std::vector<std::string> & thumbnail_ids, const std::vector<std::string> & photo_ids, const std::vector<std::string> & video_ids, const std::string& avg_rating, const int32_t num_rating, const std::map<std::string, std::string> & carrier);
  void recv_WriteMovieInfo(const int32_t seqid);
  void ReadMovieInfo(MovieInfo& _return, const int64_t req_id, const std::string& movie_id, const std::map<std::string, std::string> & carrier);
  int32_t send_ReadMovieInfo(const int64_t req_id, const std::string& movie_id, const std::map<std::string, std::string> & carrier);
  void recv_ReadMovieInfo(MovieInfo& _return, const int32_t seqid);
  void UpdateRating(const int64_t req_id, const std::string& movie_id, const int32_t sum_uncommitted_rating, const int32_t num_uncommitted_rating, const std::map<std::string, std::string> & carrier);
  int32_t send_UpdateRating(const int64_t req_id, const std::string& movie_id, const int32_t sum_uncommitted_rating, const int32_t num_uncommitted_rating, const std::map<std::string, std::string> & carrier);
  void recv_UpdateRating(const int32_t seqid);
 protected:
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> piprot_;
  std::shared_ptr< ::apache::thrift::protocol::TProtocol> poprot_;
  ::apache::thrift::protocol::TProtocol* iprot_;
  ::apache::thrift::protocol::TProtocol* oprot_;
  std::shared_ptr<::apache::thrift::async::TConcurrentClientSyncInfo> sync_;
};

#ifdef _MSC_VER
  #pragma warning( pop )
#endif

} // namespace

#endif
