// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: buffer.proto

#include "buffer.pb.h"
#include "buffer.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace maarpc {

static const char* Image_method_names[] = {
  "/maarpc.Image/create",
  "/maarpc.Image/destroy",
  "/maarpc.Image/is_empty",
  "/maarpc.Image/clear",
  "/maarpc.Image/info",
  "/maarpc.Image/encoded",
  "/maarpc.Image/set_encoded",
};

std::unique_ptr< Image::Stub> Image::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Image::Stub> stub(new Image::Stub(channel, options));
  return stub;
}

Image::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_create_(Image_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_destroy_(Image_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_is_empty_(Image_method_names[2], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_clear_(Image_method_names[3], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_info_(Image_method_names[4], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_encoded_(Image_method_names[5], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_set_encoded_(Image_method_names[6], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Image::Stub::create(::grpc::ClientContext* context, const ::maarpc::EmptyRequest& request, ::maarpc::HandleResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::maarpc::EmptyRequest, ::maarpc::HandleResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_create_, context, request, response);
}

void Image::Stub::async::create(::grpc::ClientContext* context, const ::maarpc::EmptyRequest* request, ::maarpc::HandleResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::maarpc::EmptyRequest, ::maarpc::HandleResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_create_, context, request, response, std::move(f));
}

void Image::Stub::async::create(::grpc::ClientContext* context, const ::maarpc::EmptyRequest* request, ::maarpc::HandleResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_create_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::maarpc::HandleResponse>* Image::Stub::PrepareAsynccreateRaw(::grpc::ClientContext* context, const ::maarpc::EmptyRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::maarpc::HandleResponse, ::maarpc::EmptyRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_create_, context, request);
}

::grpc::ClientAsyncResponseReader< ::maarpc::HandleResponse>* Image::Stub::AsynccreateRaw(::grpc::ClientContext* context, const ::maarpc::EmptyRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsynccreateRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Image::Stub::destroy(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::maarpc::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::maarpc::HandleRequest, ::maarpc::EmptyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_destroy_, context, request, response);
}

void Image::Stub::async::destroy(::grpc::ClientContext* context, const ::maarpc::HandleRequest* request, ::maarpc::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::maarpc::HandleRequest, ::maarpc::EmptyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_destroy_, context, request, response, std::move(f));
}

void Image::Stub::async::destroy(::grpc::ClientContext* context, const ::maarpc::HandleRequest* request, ::maarpc::EmptyResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_destroy_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::maarpc::EmptyResponse>* Image::Stub::PrepareAsyncdestroyRaw(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::maarpc::EmptyResponse, ::maarpc::HandleRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_destroy_, context, request);
}

::grpc::ClientAsyncResponseReader< ::maarpc::EmptyResponse>* Image::Stub::AsyncdestroyRaw(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncdestroyRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Image::Stub::is_empty(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::maarpc::BoolResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::maarpc::HandleRequest, ::maarpc::BoolResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_is_empty_, context, request, response);
}

void Image::Stub::async::is_empty(::grpc::ClientContext* context, const ::maarpc::HandleRequest* request, ::maarpc::BoolResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::maarpc::HandleRequest, ::maarpc::BoolResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_is_empty_, context, request, response, std::move(f));
}

void Image::Stub::async::is_empty(::grpc::ClientContext* context, const ::maarpc::HandleRequest* request, ::maarpc::BoolResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_is_empty_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::maarpc::BoolResponse>* Image::Stub::PrepareAsyncis_emptyRaw(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::maarpc::BoolResponse, ::maarpc::HandleRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_is_empty_, context, request);
}

::grpc::ClientAsyncResponseReader< ::maarpc::BoolResponse>* Image::Stub::Asyncis_emptyRaw(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncis_emptyRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Image::Stub::clear(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::maarpc::EmptyResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::maarpc::HandleRequest, ::maarpc::EmptyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_clear_, context, request, response);
}

void Image::Stub::async::clear(::grpc::ClientContext* context, const ::maarpc::HandleRequest* request, ::maarpc::EmptyResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::maarpc::HandleRequest, ::maarpc::EmptyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_clear_, context, request, response, std::move(f));
}

void Image::Stub::async::clear(::grpc::ClientContext* context, const ::maarpc::HandleRequest* request, ::maarpc::EmptyResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_clear_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::maarpc::EmptyResponse>* Image::Stub::PrepareAsyncclearRaw(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::maarpc::EmptyResponse, ::maarpc::HandleRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_clear_, context, request);
}

::grpc::ClientAsyncResponseReader< ::maarpc::EmptyResponse>* Image::Stub::AsyncclearRaw(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncclearRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Image::Stub::info(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::maarpc::ImageInfoResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::maarpc::HandleRequest, ::maarpc::ImageInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_info_, context, request, response);
}

void Image::Stub::async::info(::grpc::ClientContext* context, const ::maarpc::HandleRequest* request, ::maarpc::ImageInfoResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::maarpc::HandleRequest, ::maarpc::ImageInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_info_, context, request, response, std::move(f));
}

void Image::Stub::async::info(::grpc::ClientContext* context, const ::maarpc::HandleRequest* request, ::maarpc::ImageInfoResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_info_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::maarpc::ImageInfoResponse>* Image::Stub::PrepareAsyncinfoRaw(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::maarpc::ImageInfoResponse, ::maarpc::HandleRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_info_, context, request);
}

::grpc::ClientAsyncResponseReader< ::maarpc::ImageInfoResponse>* Image::Stub::AsyncinfoRaw(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncinfoRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Image::Stub::encoded(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::maarpc::BufferResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::maarpc::HandleRequest, ::maarpc::BufferResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_encoded_, context, request, response);
}

void Image::Stub::async::encoded(::grpc::ClientContext* context, const ::maarpc::HandleRequest* request, ::maarpc::BufferResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::maarpc::HandleRequest, ::maarpc::BufferResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_encoded_, context, request, response, std::move(f));
}

void Image::Stub::async::encoded(::grpc::ClientContext* context, const ::maarpc::HandleRequest* request, ::maarpc::BufferResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_encoded_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::maarpc::BufferResponse>* Image::Stub::PrepareAsyncencodedRaw(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::maarpc::BufferResponse, ::maarpc::HandleRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_encoded_, context, request);
}

::grpc::ClientAsyncResponseReader< ::maarpc::BufferResponse>* Image::Stub::AsyncencodedRaw(::grpc::ClientContext* context, const ::maarpc::HandleRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncencodedRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Image::Stub::set_encoded(::grpc::ClientContext* context, const ::maarpc::HandleBufferRequest& request, ::maarpc::BoolResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::maarpc::HandleBufferRequest, ::maarpc::BoolResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_set_encoded_, context, request, response);
}

void Image::Stub::async::set_encoded(::grpc::ClientContext* context, const ::maarpc::HandleBufferRequest* request, ::maarpc::BoolResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::maarpc::HandleBufferRequest, ::maarpc::BoolResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_set_encoded_, context, request, response, std::move(f));
}

void Image::Stub::async::set_encoded(::grpc::ClientContext* context, const ::maarpc::HandleBufferRequest* request, ::maarpc::BoolResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_set_encoded_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::maarpc::BoolResponse>* Image::Stub::PrepareAsyncset_encodedRaw(::grpc::ClientContext* context, const ::maarpc::HandleBufferRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::maarpc::BoolResponse, ::maarpc::HandleBufferRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_set_encoded_, context, request);
}

::grpc::ClientAsyncResponseReader< ::maarpc::BoolResponse>* Image::Stub::Asyncset_encodedRaw(::grpc::ClientContext* context, const ::maarpc::HandleBufferRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncset_encodedRaw(context, request, cq);
  result->StartCall();
  return result;
}

Image::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Image_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Image::Service, ::maarpc::EmptyRequest, ::maarpc::HandleResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Image::Service* service,
             ::grpc::ServerContext* ctx,
             const ::maarpc::EmptyRequest* req,
             ::maarpc::HandleResponse* resp) {
               return service->create(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Image_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Image::Service, ::maarpc::HandleRequest, ::maarpc::EmptyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Image::Service* service,
             ::grpc::ServerContext* ctx,
             const ::maarpc::HandleRequest* req,
             ::maarpc::EmptyResponse* resp) {
               return service->destroy(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Image_method_names[2],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Image::Service, ::maarpc::HandleRequest, ::maarpc::BoolResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Image::Service* service,
             ::grpc::ServerContext* ctx,
             const ::maarpc::HandleRequest* req,
             ::maarpc::BoolResponse* resp) {
               return service->is_empty(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Image_method_names[3],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Image::Service, ::maarpc::HandleRequest, ::maarpc::EmptyResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Image::Service* service,
             ::grpc::ServerContext* ctx,
             const ::maarpc::HandleRequest* req,
             ::maarpc::EmptyResponse* resp) {
               return service->clear(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Image_method_names[4],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Image::Service, ::maarpc::HandleRequest, ::maarpc::ImageInfoResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Image::Service* service,
             ::grpc::ServerContext* ctx,
             const ::maarpc::HandleRequest* req,
             ::maarpc::ImageInfoResponse* resp) {
               return service->info(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Image_method_names[5],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Image::Service, ::maarpc::HandleRequest, ::maarpc::BufferResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Image::Service* service,
             ::grpc::ServerContext* ctx,
             const ::maarpc::HandleRequest* req,
             ::maarpc::BufferResponse* resp) {
               return service->encoded(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Image_method_names[6],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Image::Service, ::maarpc::HandleBufferRequest, ::maarpc::BoolResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Image::Service* service,
             ::grpc::ServerContext* ctx,
             const ::maarpc::HandleBufferRequest* req,
             ::maarpc::BoolResponse* resp) {
               return service->set_encoded(ctx, req, resp);
             }, this)));
}

Image::Service::~Service() {
}

::grpc::Status Image::Service::create(::grpc::ServerContext* context, const ::maarpc::EmptyRequest* request, ::maarpc::HandleResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Image::Service::destroy(::grpc::ServerContext* context, const ::maarpc::HandleRequest* request, ::maarpc::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Image::Service::is_empty(::grpc::ServerContext* context, const ::maarpc::HandleRequest* request, ::maarpc::BoolResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Image::Service::clear(::grpc::ServerContext* context, const ::maarpc::HandleRequest* request, ::maarpc::EmptyResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Image::Service::info(::grpc::ServerContext* context, const ::maarpc::HandleRequest* request, ::maarpc::ImageInfoResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Image::Service::encoded(::grpc::ServerContext* context, const ::maarpc::HandleRequest* request, ::maarpc::BufferResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Image::Service::set_encoded(::grpc::ServerContext* context, const ::maarpc::HandleBufferRequest* request, ::maarpc::BoolResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace maarpc

