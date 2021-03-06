/**
 * MODIFIED from code autogenerated by Thrift Compiler (0.9.2)
 *
 * WARNING WARNING WARNING
 * This file has been hand-patched. See https://github.com/jaegertracing/cpp-client/issues/45 .
 */
#include "tracetest_types.h"

#include <algorithm>
#include <ostream>

#include <thrift/TToString.h>

namespace jaegertracing { namespace crossdock { namespace thrift {

int _kTransportValues[] = {
  Transport::HTTP,
  Transport::TCHANNEL,
  Transport::DUMMY
};
const char* _kTransportNames[] = {
  "HTTP",
  "TCHANNEL",
  "DUMMY"
};
const std::map<int, const char*> _Transport_VALUES_TO_NAMES(::apache::thrift::TEnumIterator(3, _kTransportValues, _kTransportNames), ::apache::thrift::TEnumIterator(-1, NULL, NULL));


Downstream::~Downstream() throw() {
}


void Downstream::__set_serviceName(const std::string& val) {
  this->serviceName = val;
}

void Downstream::__set_serverRole(const std::string& val) {
  this->serverRole = val;
}

void Downstream::__set_host(const std::string& val) {
  this->host = val;
}

void Downstream::__set_port(const std::string& val) {
  this->port = val;
}

void Downstream::__set_transport(const Transport::type val) {
  this->transport = val;
}

void Downstream::__set_downstream(const Downstream& val) {
  this->downstream = boost::shared_ptr<Downstream>(new Downstream(val));
}

const char* Downstream::ascii_fingerprint = "864D68E1D3FB0C71C1E979F437051051";
const uint8_t Downstream::binary_fingerprint[16] = {0x86,0x4D,0x68,0xE1,0xD3,0xFB,0x0C,0x71,0xC1,0xE9,0x79,0xF4,0x37,0x05,0x10,0x51};

uint32_t Downstream::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_serviceName = false;
  bool isset_serverRole = false;
  bool isset_host = false;
  bool isset_port = false;
  bool isset_transport = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->serviceName);
          isset_serviceName = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->serverRole);
          isset_serverRole = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->host);
          isset_host = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->port);
          isset_port = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 5:
        if (ftype == ::apache::thrift::protocol::T_I32) {
          int32_t ecast0;
          xfer += iprot->readI32(ecast0);
          this->transport = (Transport::type)ecast0;
          isset_transport = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 6:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->downstream->read(iprot);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_serviceName)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_serverRole)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_host)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_port)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_transport)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t Downstream::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("Downstream");

  xfer += oprot->writeFieldBegin("serviceName", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->serviceName);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("serverRole", ::apache::thrift::protocol::T_STRING, 2);
  xfer += oprot->writeString(this->serverRole);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("host", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->host);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("port", ::apache::thrift::protocol::T_STRING, 4);
  xfer += oprot->writeString(this->port);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("transport", ::apache::thrift::protocol::T_I32, 5);
  xfer += oprot->writeI32((int32_t)this->transport);
  xfer += oprot->writeFieldEnd();

  if (this->downstream) {
    xfer += oprot->writeFieldBegin("downstream", ::apache::thrift::protocol::T_STRUCT, 6);
    xfer += this->downstream->write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(Downstream &a, Downstream &b) {
  using ::std::swap;
  swap(a.serviceName, b.serviceName);
  swap(a.serverRole, b.serverRole);
  swap(a.host, b.host);
  swap(a.port, b.port);
  swap(a.transport, b.transport);
  swap(a.downstream, b.downstream);
}

Downstream::Downstream(const Downstream& other1) {
  serviceName = other1.serviceName;
  serverRole = other1.serverRole;
  host = other1.host;
  port = other1.port;
  transport = other1.transport;
  downstream = other1.downstream;
}
Downstream& Downstream::operator=(const Downstream& other2) {
  serviceName = other2.serviceName;
  serverRole = other2.serverRole;
  host = other2.host;
  port = other2.port;
  transport = other2.transport;
  downstream = other2.downstream;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const Downstream& obj) {
  using apache::thrift::to_string;
  out << "Downstream(";
  out << "serviceName=" << to_string(obj.serviceName);
  out << ", " << "serverRole=" << to_string(obj.serverRole);
  out << ", " << "host=" << to_string(obj.host);
  out << ", " << "port=" << to_string(obj.port);
  out << ", " << "transport=" << to_string(obj.transport);
  out << ", " << "downstream="; (obj.downstream ? (out << to_string(*obj.downstream)) : (out << "<null>"));
  out << ")";
  return out;
}


StartTraceRequest::~StartTraceRequest() throw() {
}


void StartTraceRequest::__set_serverRole(const std::string& val) {
  this->serverRole = val;
}

void StartTraceRequest::__set_sampled(const bool val) {
  this->sampled = val;
}

void StartTraceRequest::__set_baggage(const std::string& val) {
  this->baggage = val;
}

void StartTraceRequest::__set_downstream(const Downstream& val) {
  this->downstream = val;
}

const char* StartTraceRequest::ascii_fingerprint = "EBD7726A3B9A0D49D03E0D6A6F6C72E0";
const uint8_t StartTraceRequest::binary_fingerprint[16] = {0xEB,0xD7,0x72,0x6A,0x3B,0x9A,0x0D,0x49,0xD0,0x3E,0x0D,0x6A,0x6F,0x6C,0x72,0xE0};

uint32_t StartTraceRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_serverRole = false;
  bool isset_sampled = false;
  bool isset_baggage = false;
  bool isset_downstream = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->serverRole);
          isset_serverRole = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->sampled);
          isset_sampled = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->baggage);
          isset_baggage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 4:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->downstream.read(iprot);
          isset_downstream = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_serverRole)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_sampled)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_baggage)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_downstream)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t StartTraceRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("StartTraceRequest");

  xfer += oprot->writeFieldBegin("serverRole", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->serverRole);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("sampled", ::apache::thrift::protocol::T_BOOL, 2);
  xfer += oprot->writeBool(this->sampled);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("baggage", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->baggage);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("downstream", ::apache::thrift::protocol::T_STRUCT, 4);
  xfer += this->downstream.write(oprot);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(StartTraceRequest &a, StartTraceRequest &b) {
  using ::std::swap;
  swap(a.serverRole, b.serverRole);
  swap(a.sampled, b.sampled);
  swap(a.baggage, b.baggage);
  swap(a.downstream, b.downstream);
}

StartTraceRequest::StartTraceRequest(const StartTraceRequest& other3) {
  serverRole = other3.serverRole;
  sampled = other3.sampled;
  baggage = other3.baggage;
  downstream = other3.downstream;
}
StartTraceRequest& StartTraceRequest::operator=(const StartTraceRequest& other4) {
  serverRole = other4.serverRole;
  sampled = other4.sampled;
  baggage = other4.baggage;
  downstream = other4.downstream;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const StartTraceRequest& obj) {
  using apache::thrift::to_string;
  out << "StartTraceRequest(";
  out << "serverRole=" << to_string(obj.serverRole);
  out << ", " << "sampled=" << to_string(obj.sampled);
  out << ", " << "baggage=" << to_string(obj.baggage);
  out << ", " << "downstream=" << to_string(obj.downstream);
  out << ")";
  return out;
}


JoinTraceRequest::~JoinTraceRequest() throw() {
}


void JoinTraceRequest::__set_serverRole(const std::string& val) {
  this->serverRole = val;
}

void JoinTraceRequest::__set_downstream(const Downstream& val) {
  this->downstream = val;
__isset.downstream = true;
}

const char* JoinTraceRequest::ascii_fingerprint = "B8479409112F7458788A09AB6826E542";
const uint8_t JoinTraceRequest::binary_fingerprint[16] = {0xB8,0x47,0x94,0x09,0x11,0x2F,0x74,0x58,0x78,0x8A,0x09,0xAB,0x68,0x26,0xE5,0x42};

uint32_t JoinTraceRequest::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_serverRole = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->serverRole);
          isset_serverRole = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->downstream.read(iprot);
          this->__isset.downstream = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_serverRole)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t JoinTraceRequest::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("JoinTraceRequest");

  xfer += oprot->writeFieldBegin("serverRole", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->serverRole);
  xfer += oprot->writeFieldEnd();

  if (this->__isset.downstream) {
    xfer += oprot->writeFieldBegin("downstream", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->downstream.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(JoinTraceRequest &a, JoinTraceRequest &b) {
  using ::std::swap;
  swap(a.serverRole, b.serverRole);
  swap(a.downstream, b.downstream);
  swap(a.__isset, b.__isset);
}

JoinTraceRequest::JoinTraceRequest(const JoinTraceRequest& other5) {
  serverRole = other5.serverRole;
  downstream = other5.downstream;
  __isset = other5.__isset;
}
JoinTraceRequest& JoinTraceRequest::operator=(const JoinTraceRequest& other6) {
  serverRole = other6.serverRole;
  downstream = other6.downstream;
  __isset = other6.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const JoinTraceRequest& obj) {
  using apache::thrift::to_string;
  out << "JoinTraceRequest(";
  out << "serverRole=" << to_string(obj.serverRole);
  out << ", " << "downstream="; (obj.__isset.downstream ? (out << to_string(obj.downstream)) : (out << "<null>"));
  out << ")";
  return out;
}


ObservedSpan::~ObservedSpan() throw() {
}


void ObservedSpan::__set_traceId(const std::string& val) {
  this->traceId = val;
}

void ObservedSpan::__set_sampled(const bool val) {
  this->sampled = val;
}

void ObservedSpan::__set_baggage(const std::string& val) {
  this->baggage = val;
}

const char* ObservedSpan::ascii_fingerprint = "980A53AA3FC6CDB7DBBD4C3B9EF9B8E0";
const uint8_t ObservedSpan::binary_fingerprint[16] = {0x98,0x0A,0x53,0xAA,0x3F,0xC6,0xCD,0xB7,0xDB,0xBD,0x4C,0x3B,0x9E,0xF9,0xB8,0xE0};

uint32_t ObservedSpan::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_traceId = false;
  bool isset_sampled = false;
  bool isset_baggage = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->traceId);
          isset_traceId = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_BOOL) {
          xfer += iprot->readBool(this->sampled);
          isset_sampled = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->baggage);
          isset_baggage = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_traceId)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_sampled)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  if (!isset_baggage)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t ObservedSpan::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("ObservedSpan");

  xfer += oprot->writeFieldBegin("traceId", ::apache::thrift::protocol::T_STRING, 1);
  xfer += oprot->writeString(this->traceId);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("sampled", ::apache::thrift::protocol::T_BOOL, 2);
  xfer += oprot->writeBool(this->sampled);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldBegin("baggage", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->baggage);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(ObservedSpan &a, ObservedSpan &b) {
  using ::std::swap;
  swap(a.traceId, b.traceId);
  swap(a.sampled, b.sampled);
  swap(a.baggage, b.baggage);
}

ObservedSpan::ObservedSpan(const ObservedSpan& other7) {
  traceId = other7.traceId;
  sampled = other7.sampled;
  baggage = other7.baggage;
}
ObservedSpan& ObservedSpan::operator=(const ObservedSpan& other8) {
  traceId = other8.traceId;
  sampled = other8.sampled;
  baggage = other8.baggage;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const ObservedSpan& obj) {
  using apache::thrift::to_string;
  out << "ObservedSpan(";
  out << "traceId=" << to_string(obj.traceId);
  out << ", " << "sampled=" << to_string(obj.sampled);
  out << ", " << "baggage=" << to_string(obj.baggage);
  out << ")";
  return out;
}


TraceResponse::~TraceResponse() throw() {
}


void TraceResponse::__set_span(const ObservedSpan& val) {
  this->span = val;
__isset.span = true;
}

void TraceResponse::__set_downstream(const TraceResponse& val) {
  this->downstream = boost::shared_ptr<TraceResponse>(new TraceResponse(val));
}

void TraceResponse::__set_notImplementedError(const std::string& val) {
  this->notImplementedError = val;
}

const char* TraceResponse::ascii_fingerprint = "BE76F8F59F14519CE6831037A5CDA9EE";
const uint8_t TraceResponse::binary_fingerprint[16] = {0xBE,0x76,0xF8,0xF5,0x9F,0x14,0x51,0x9C,0xE6,0x83,0x10,0x37,0xA5,0xCD,0xA9,0xEE};

uint32_t TraceResponse::read(::apache::thrift::protocol::TProtocol* iprot) {

  uint32_t xfer = 0;
  std::string fname;
  ::apache::thrift::protocol::TType ftype;
  int16_t fid;

  xfer += iprot->readStructBegin(fname);

  using ::apache::thrift::protocol::TProtocolException;

  bool isset_notImplementedError = false;

  while (true)
  {
    xfer += iprot->readFieldBegin(fname, ftype, fid);
    if (ftype == ::apache::thrift::protocol::T_STOP) {
      break;
    }
    switch (fid)
    {
      case 1:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->span.read(iprot);
          this->__isset.span = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 2:
        if (ftype == ::apache::thrift::protocol::T_STRUCT) {
          xfer += this->downstream->read(iprot);
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      case 3:
        if (ftype == ::apache::thrift::protocol::T_STRING) {
          xfer += iprot->readString(this->notImplementedError);
          isset_notImplementedError = true;
        } else {
          xfer += iprot->skip(ftype);
        }
        break;
      default:
        xfer += iprot->skip(ftype);
        break;
    }
    xfer += iprot->readFieldEnd();
  }

  xfer += iprot->readStructEnd();

  if (!isset_notImplementedError)
    throw TProtocolException(TProtocolException::INVALID_DATA);
  return xfer;
}

uint32_t TraceResponse::write(::apache::thrift::protocol::TProtocol* oprot) const {
  uint32_t xfer = 0;
  oprot->incrementRecursionDepth();
  xfer += oprot->writeStructBegin("TraceResponse");

  if (this->__isset.span) {
    xfer += oprot->writeFieldBegin("span", ::apache::thrift::protocol::T_STRUCT, 1);
    xfer += this->span.write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  if (this->downstream) {
    xfer += oprot->writeFieldBegin("downstream", ::apache::thrift::protocol::T_STRUCT, 2);
    xfer += this->downstream->write(oprot);
    xfer += oprot->writeFieldEnd();
  }
  xfer += oprot->writeFieldBegin("notImplementedError", ::apache::thrift::protocol::T_STRING, 3);
  xfer += oprot->writeString(this->notImplementedError);
  xfer += oprot->writeFieldEnd();

  xfer += oprot->writeFieldStop();
  xfer += oprot->writeStructEnd();
  oprot->decrementRecursionDepth();
  return xfer;
}

void swap(TraceResponse &a, TraceResponse &b) {
  using ::std::swap;
  swap(a.span, b.span);
  swap(a.downstream, b.downstream);
  swap(a.notImplementedError, b.notImplementedError);
  swap(a.__isset, b.__isset);
}

TraceResponse::TraceResponse(const TraceResponse& other9) {
  span = other9.span;
  downstream = other9.downstream;
  notImplementedError = other9.notImplementedError;
  __isset = other9.__isset;
}
TraceResponse& TraceResponse::operator=(const TraceResponse& other10) {
  span = other10.span;
  downstream = other10.downstream;
  notImplementedError = other10.notImplementedError;
  __isset = other10.__isset;
  return *this;
}
std::ostream& operator<<(std::ostream& out, const TraceResponse& obj) {
  using apache::thrift::to_string;
  out << "TraceResponse(";
  out << "span="; (obj.__isset.span ? (out << to_string(obj.span)) : (out << "<null>"));
  out << ", " << "downstream="; (obj.downstream ? (out << to_string(*obj.downstream)) : (out << "<null>"));
  out << ", " << "notImplementedError=" << to_string(obj.notImplementedError);
  out << ")";
  return out;
}

}}} // namespace
