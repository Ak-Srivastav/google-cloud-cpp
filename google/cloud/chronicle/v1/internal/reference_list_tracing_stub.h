// Copyright 2025 Google LLC
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      https://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Generated by the Codegen C++ plugin.
// If you make any local changes, they will be lost.
// source: google/cloud/chronicle/v1/reference_list.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHRONICLE_V1_INTERNAL_REFERENCE_LIST_TRACING_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHRONICLE_V1_INTERNAL_REFERENCE_LIST_TRACING_STUB_H

#include "google/cloud/chronicle/v1/internal/reference_list_stub.h"
#include "google/cloud/internal/trace_propagator.h"
#include "google/cloud/options.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace chronicle_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class ReferenceListServiceTracingStub : public ReferenceListServiceStub {
 public:
  ~ReferenceListServiceTracingStub() override = default;

  explicit ReferenceListServiceTracingStub(
      std::shared_ptr<ReferenceListServiceStub> child);

  StatusOr<google::cloud::chronicle::v1::ReferenceList> GetReferenceList(
      grpc::ClientContext& context, Options const& options,
      google::cloud::chronicle::v1::GetReferenceListRequest const& request)
      override;

  StatusOr<google::cloud::chronicle::v1::ListReferenceListsResponse>
  ListReferenceLists(
      grpc::ClientContext& context, Options const& options,
      google::cloud::chronicle::v1::ListReferenceListsRequest const& request)
      override;

  StatusOr<google::cloud::chronicle::v1::ReferenceList> CreateReferenceList(
      grpc::ClientContext& context, Options const& options,
      google::cloud::chronicle::v1::CreateReferenceListRequest const& request)
      override;

  StatusOr<google::cloud::chronicle::v1::ReferenceList> UpdateReferenceList(
      grpc::ClientContext& context, Options const& options,
      google::cloud::chronicle::v1::UpdateReferenceListRequest const& request)
      override;

  StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<ReferenceListServiceStub> child_;
  std::shared_ptr<opentelemetry::context::propagation::TextMapPropagator>
      propagator_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Applies the tracing decorator to the given stub.
 *
 * The stub is only decorated if the library has been compiled with
 * OpenTelemetry.
 */
std::shared_ptr<ReferenceListServiceStub> MakeReferenceListServiceTracingStub(
    std::shared_ptr<ReferenceListServiceStub> stub);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace chronicle_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_CHRONICLE_V1_INTERNAL_REFERENCE_LIST_TRACING_STUB_H
