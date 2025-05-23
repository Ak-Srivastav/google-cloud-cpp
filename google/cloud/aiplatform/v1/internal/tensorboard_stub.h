// Copyright 2023 Google LLC
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
// source: google/cloud/aiplatform/v1/tensorboard_service.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_TENSORBOARD_STUB_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_TENSORBOARD_STUB_H

#include "google/cloud/completion_queue.h"
#include "google/cloud/future.h"
#include "google/cloud/internal/streaming_read_rpc.h"
#include "google/cloud/options.h"
#include "google/cloud/status_or.h"
#include "google/cloud/version.h"
#include <google/cloud/aiplatform/v1/tensorboard_service.grpc.pb.h>
#include <google/cloud/location/locations.grpc.pb.h>
#include <google/iam/v1/iam_policy.grpc.pb.h>
#include <google/longrunning/operations.grpc.pb.h>
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace aiplatform_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

class TensorboardServiceStub {
 public:
  virtual ~TensorboardServiceStub() = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncCreateTensorboard(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::CreateTensorboardRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> CreateTensorboard(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::CreateTensorboardRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::Tensorboard> GetTensorboard(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTensorboardRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncUpdateTensorboard(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::UpdateTensorboardRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> UpdateTensorboard(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::UpdateTensorboardRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListTensorboardsResponse>
  ListTensorboards(grpc::ClientContext& context, Options const& options,
                   google::cloud::aiplatform::v1::ListTensorboardsRequest const&
                       request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTensorboard(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteTensorboardRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteTensorboard(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteTensorboardRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ReadTensorboardUsageResponse>
  ReadTensorboardUsage(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ReadTensorboardSizeResponse>
  ReadTensorboardSize(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
  CreateTensorboardExperiment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTensorboardExperimentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
  GetTensorboardExperiment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
  UpdateTensorboardExperiment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::UpdateTensorboardExperimentRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::ListTensorboardExperimentsResponse>
  ListTensorboardExperiments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListTensorboardExperimentsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTensorboardExperiment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteTensorboardExperiment(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
  CreateTensorboardRun(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTensorboardRunRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::BatchCreateTensorboardRunsResponse>
  BatchCreateTensorboardRuns(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::BatchCreateTensorboardRunsRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
  GetTensorboardRun(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTensorboardRunRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TensorboardRun>
  UpdateTensorboardRun(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::ListTensorboardRunsResponse>
  ListTensorboardRuns(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListTensorboardRunsRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTensorboardRun(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteTensorboardRun(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::BatchCreateTensorboardTimeSeriesResponse>
  BatchCreateTensorboardTimeSeries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          BatchCreateTensorboardTimeSeriesRequest const& request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
  CreateTensorboardTimeSeries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTensorboardTimeSeriesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
  GetTensorboardTimeSeries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&
          request) = 0;

  virtual StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
  UpdateTensorboardTimeSeries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::UpdateTensorboardTimeSeriesRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::ListTensorboardTimeSeriesResponse>
  ListTensorboardTimeSeries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListTensorboardTimeSeriesRequest const&
          request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTensorboardTimeSeries(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
          request) = 0;

  virtual StatusOr<google::longrunning::Operation> DeleteTensorboardTimeSeries(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::BatchReadTensorboardTimeSeriesDataResponse>
  BatchReadTensorboardTimeSeriesData(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          BatchReadTensorboardTimeSeriesDataRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataResponse>
  ReadTensorboardTimeSeriesData(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataRequest const&
          request) = 0;

  virtual std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>>
  ReadTensorboardBlobData(
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::WriteTensorboardExperimentDataResponse>
  WriteTensorboardExperimentData(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          WriteTensorboardExperimentDataRequest const& request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::WriteTensorboardRunDataResponse>
  WriteTensorboardRunData(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&
          request) = 0;

  virtual StatusOr<
      google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataResponse>
  ExportTensorboardTimeSeriesData(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          ExportTensorboardTimeSeriesDataRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::ListLocationsResponse>
  ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) = 0;

  virtual StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) = 0;

  virtual StatusOr<google::iam::v1::TestIamPermissionsResponse>
  TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::ListOperationsResponse> ListOperations(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::ListOperationsRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> GetOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual Status DeleteOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::DeleteOperationRequest const& request) = 0;

  virtual Status CancelOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::CancelOperationRequest const& request) = 0;

  virtual StatusOr<google::longrunning::Operation> WaitOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::WaitOperationRequest const& request) = 0;

  virtual future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) = 0;

  virtual future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) = 0;
};

class DefaultTensorboardServiceStub : public TensorboardServiceStub {
 public:
  DefaultTensorboardServiceStub(
      std::unique_ptr<
          google::cloud::aiplatform::v1::TensorboardService::StubInterface>
          grpc_stub,
      std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub,
      std::unique_ptr<google::cloud::location::Locations::StubInterface>
          locations_stub,
      std::unique_ptr<google::longrunning::Operations::StubInterface>
          operations_stub)
      : grpc_stub_(std::move(grpc_stub)),
        iampolicy_stub_(std::move(iampolicy_stub)),
        locations_stub_(std::move(locations_stub)),
        operations_stub_(std::move(operations_stub)) {}

  future<StatusOr<google::longrunning::Operation>> AsyncCreateTensorboard(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::CreateTensorboardRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> CreateTensorboard(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::CreateTensorboardRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::Tensorboard> GetTensorboard(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTensorboardRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncUpdateTensorboard(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::UpdateTensorboardRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> UpdateTensorboard(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::UpdateTensorboardRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListTensorboardsResponse>
  ListTensorboards(grpc::ClientContext& context, Options const& options,
                   google::cloud::aiplatform::v1::ListTensorboardsRequest const&
                       request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTensorboard(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteTensorboardRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteTensorboard(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteTensorboardRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ReadTensorboardUsageResponse>
  ReadTensorboardUsage(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ReadTensorboardUsageRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ReadTensorboardSizeResponse>
  ReadTensorboardSize(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ReadTensorboardSizeRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
  CreateTensorboardExperiment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTensorboardExperimentRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
  GetTensorboardExperiment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTensorboardExperimentRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardExperiment>
  UpdateTensorboardExperiment(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::UpdateTensorboardExperimentRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ListTensorboardExperimentsResponse>
  ListTensorboardExperiments(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListTensorboardExperimentsRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTensorboardExperiment(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteTensorboardExperiment(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteTensorboardExperimentRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardRun> CreateTensorboardRun(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTensorboardRunRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::BatchCreateTensorboardRunsResponse>
  BatchCreateTensorboardRuns(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::BatchCreateTensorboardRunsRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardRun> GetTensorboardRun(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTensorboardRunRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardRun> UpdateTensorboardRun(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::UpdateTensorboardRunRequest const& request)
      override;

  StatusOr<google::cloud::aiplatform::v1::ListTensorboardRunsResponse>
  ListTensorboardRuns(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListTensorboardRunsRequest const& request)
      override;

  future<StatusOr<google::longrunning::Operation>> AsyncDeleteTensorboardRun(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const& request)
      override;

  StatusOr<google::longrunning::Operation> DeleteTensorboardRun(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteTensorboardRunRequest const& request)
      override;

  StatusOr<
      google::cloud::aiplatform::v1::BatchCreateTensorboardTimeSeriesResponse>
  BatchCreateTensorboardTimeSeries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          BatchCreateTensorboardTimeSeriesRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
  CreateTensorboardTimeSeries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::CreateTensorboardTimeSeriesRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
  GetTensorboardTimeSeries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::GetTensorboardTimeSeriesRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::TensorboardTimeSeries>
  UpdateTensorboardTimeSeries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::UpdateTensorboardTimeSeriesRequest const&
          request) override;

  StatusOr<google::cloud::aiplatform::v1::ListTensorboardTimeSeriesResponse>
  ListTensorboardTimeSeries(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ListTensorboardTimeSeriesRequest const&
          request) override;

  future<StatusOr<google::longrunning::Operation>>
  AsyncDeleteTensorboardTimeSeries(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteTensorboardTimeSeries(
      grpc::ClientContext& context, Options options,
      google::cloud::aiplatform::v1::DeleteTensorboardTimeSeriesRequest const&
          request) override;

  StatusOr<
      google::cloud::aiplatform::v1::BatchReadTensorboardTimeSeriesDataResponse>
  BatchReadTensorboardTimeSeriesData(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          BatchReadTensorboardTimeSeriesDataRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataResponse>
  ReadTensorboardTimeSeriesData(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::ReadTensorboardTimeSeriesDataRequest const&
          request) override;

  std::unique_ptr<google::cloud::internal::StreamingReadRpc<
      google::cloud::aiplatform::v1::ReadTensorboardBlobDataResponse>>
  ReadTensorboardBlobData(
      std::shared_ptr<grpc::ClientContext> context, Options const& options,
      google::cloud::aiplatform::v1::ReadTensorboardBlobDataRequest const&
          request) override;

  StatusOr<
      google::cloud::aiplatform::v1::WriteTensorboardExperimentDataResponse>
  WriteTensorboardExperimentData(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          WriteTensorboardExperimentDataRequest const& request) override;

  StatusOr<google::cloud::aiplatform::v1::WriteTensorboardRunDataResponse>
  WriteTensorboardRunData(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::WriteTensorboardRunDataRequest const&
          request) override;

  StatusOr<
      google::cloud::aiplatform::v1::ExportTensorboardTimeSeriesDataResponse>
  ExportTensorboardTimeSeriesData(
      grpc::ClientContext& context, Options const& options,
      google::cloud::aiplatform::v1::
          ExportTensorboardTimeSeriesDataRequest const& request) override;

  StatusOr<google::cloud::location::ListLocationsResponse> ListLocations(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::ListLocationsRequest const& request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      grpc::ClientContext& context, Options const& options,
      google::cloud::location::GetLocationRequest const& request) override;

  StatusOr<google::iam::v1::Policy> SetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::SetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::Policy> GetIamPolicy(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::GetIamPolicyRequest const& request) override;

  StatusOr<google::iam::v1::TestIamPermissionsResponse> TestIamPermissions(
      grpc::ClientContext& context, Options const& options,
      google::iam::v1::TestIamPermissionsRequest const& request) override;

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

  StatusOr<google::longrunning::Operation> WaitOperation(
      grpc::ClientContext& context, Options const& options,
      google::longrunning::WaitOperationRequest const& request) override;

  future<StatusOr<google::longrunning::Operation>> AsyncGetOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::GetOperationRequest const& request) override;

  future<Status> AsyncCancelOperation(
      google::cloud::CompletionQueue& cq,
      std::shared_ptr<grpc::ClientContext> context,
      google::cloud::internal::ImmutableOptions options,
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::unique_ptr<
      google::cloud::aiplatform::v1::TensorboardService::StubInterface>
      grpc_stub_;
  std::unique_ptr<google::iam::v1::IAMPolicy::StubInterface> iampolicy_stub_;
  std::unique_ptr<google::cloud::location::Locations::StubInterface>
      locations_stub_;
  std::unique_ptr<google::longrunning::Operations::StubInterface>
      operations_stub_;
};

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace aiplatform_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_AIPLATFORM_V1_INTERNAL_TENSORBOARD_STUB_H
