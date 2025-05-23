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
// source: google/cloud/oracledatabase/v1/oracledatabase.proto

#ifndef GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORACLEDATABASE_V1_INTERNAL_ORACLE_DATABASE_TRACING_CONNECTION_H
#define GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORACLEDATABASE_V1_INTERNAL_ORACLE_DATABASE_TRACING_CONNECTION_H

#include "google/cloud/oracledatabase/v1/oracle_database_connection.h"
#include "google/cloud/version.h"
#include <memory>

namespace google {
namespace cloud {
namespace oracledatabase_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

class OracleDatabaseTracingConnection
    : public oracledatabase_v1::OracleDatabaseConnection {
 public:
  ~OracleDatabaseTracingConnection() override = default;

  explicit OracleDatabaseTracingConnection(
      std::shared_ptr<oracledatabase_v1::OracleDatabaseConnection> child);

  Options options() override { return child_->options(); }

  StreamRange<google::cloud::oracledatabase::v1::CloudExadataInfrastructure>
  ListCloudExadataInfrastructures(
      google::cloud::oracledatabase::v1::ListCloudExadataInfrastructuresRequest
          request) override;

  StatusOr<google::cloud::oracledatabase::v1::CloudExadataInfrastructure>
  GetCloudExadataInfrastructure(
      google::cloud::oracledatabase::v1::
          GetCloudExadataInfrastructureRequest const& request) override;

  future<
      StatusOr<google::cloud::oracledatabase::v1::CloudExadataInfrastructure>>
  CreateCloudExadataInfrastructure(
      google::cloud::oracledatabase::v1::
          CreateCloudExadataInfrastructureRequest const& request) override;

  StatusOr<google::longrunning::Operation> CreateCloudExadataInfrastructure(
      NoAwaitTag,
      google::cloud::oracledatabase::v1::
          CreateCloudExadataInfrastructureRequest const& request) override;

  future<
      StatusOr<google::cloud::oracledatabase::v1::CloudExadataInfrastructure>>
  CreateCloudExadataInfrastructure(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::oracledatabase::v1::OperationMetadata>>
  DeleteCloudExadataInfrastructure(
      google::cloud::oracledatabase::v1::
          DeleteCloudExadataInfrastructureRequest const& request) override;

  StatusOr<google::longrunning::Operation> DeleteCloudExadataInfrastructure(
      NoAwaitTag,
      google::cloud::oracledatabase::v1::
          DeleteCloudExadataInfrastructureRequest const& request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::OperationMetadata>>
  DeleteCloudExadataInfrastructure(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::oracledatabase::v1::CloudVmCluster>
  ListCloudVmClusters(
      google::cloud::oracledatabase::v1::ListCloudVmClustersRequest request)
      override;

  StatusOr<google::cloud::oracledatabase::v1::CloudVmCluster> GetCloudVmCluster(
      google::cloud::oracledatabase::v1::GetCloudVmClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::CloudVmCluster>>
  CreateCloudVmCluster(
      google::cloud::oracledatabase::v1::CreateCloudVmClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateCloudVmCluster(
      NoAwaitTag,
      google::cloud::oracledatabase::v1::CreateCloudVmClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::CloudVmCluster>>
  CreateCloudVmCluster(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::oracledatabase::v1::OperationMetadata>>
  DeleteCloudVmCluster(
      google::cloud::oracledatabase::v1::DeleteCloudVmClusterRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteCloudVmCluster(
      NoAwaitTag,
      google::cloud::oracledatabase::v1::DeleteCloudVmClusterRequest const&
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::OperationMetadata>>
  DeleteCloudVmCluster(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::oracledatabase::v1::Entitlement> ListEntitlements(
      google::cloud::oracledatabase::v1::ListEntitlementsRequest request)
      override;

  StreamRange<google::cloud::oracledatabase::v1::DbServer> ListDbServers(
      google::cloud::oracledatabase::v1::ListDbServersRequest request) override;

  StreamRange<google::cloud::oracledatabase::v1::DbNode> ListDbNodes(
      google::cloud::oracledatabase::v1::ListDbNodesRequest request) override;

  StreamRange<google::cloud::oracledatabase::v1::GiVersion> ListGiVersions(
      google::cloud::oracledatabase::v1::ListGiVersionsRequest request)
      override;

  StreamRange<google::cloud::oracledatabase::v1::DbSystemShape>
  ListDbSystemShapes(
      google::cloud::oracledatabase::v1::ListDbSystemShapesRequest request)
      override;

  StreamRange<google::cloud::oracledatabase::v1::AutonomousDatabase>
  ListAutonomousDatabases(
      google::cloud::oracledatabase::v1::ListAutonomousDatabasesRequest request)
      override;

  StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>
  GetAutonomousDatabase(
      google::cloud::oracledatabase::v1::GetAutonomousDatabaseRequest const&
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>>
  CreateAutonomousDatabase(
      google::cloud::oracledatabase::v1::CreateAutonomousDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> CreateAutonomousDatabase(
      NoAwaitTag,
      google::cloud::oracledatabase::v1::CreateAutonomousDatabaseRequest const&
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>>
  CreateAutonomousDatabase(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::oracledatabase::v1::OperationMetadata>>
  DeleteAutonomousDatabase(
      google::cloud::oracledatabase::v1::DeleteAutonomousDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> DeleteAutonomousDatabase(
      NoAwaitTag,
      google::cloud::oracledatabase::v1::DeleteAutonomousDatabaseRequest const&
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::OperationMetadata>>
  DeleteAutonomousDatabase(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>>
  RestoreAutonomousDatabase(
      google::cloud::oracledatabase::v1::RestoreAutonomousDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RestoreAutonomousDatabase(
      NoAwaitTag,
      google::cloud::oracledatabase::v1::RestoreAutonomousDatabaseRequest const&
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>>
  RestoreAutonomousDatabase(
      google::longrunning::Operation const& operation) override;

  StatusOr<google::cloud::oracledatabase::v1::
               GenerateAutonomousDatabaseWalletResponse>
  GenerateAutonomousDatabaseWallet(
      google::cloud::oracledatabase::v1::
          GenerateAutonomousDatabaseWalletRequest const& request) override;

  StreamRange<google::cloud::oracledatabase::v1::AutonomousDbVersion>
  ListAutonomousDbVersions(
      google::cloud::oracledatabase::v1::ListAutonomousDbVersionsRequest
          request) override;

  StreamRange<google::cloud::oracledatabase::v1::AutonomousDatabaseCharacterSet>
  ListAutonomousDatabaseCharacterSets(
      google::cloud::oracledatabase::v1::
          ListAutonomousDatabaseCharacterSetsRequest request) override;

  StreamRange<google::cloud::oracledatabase::v1::AutonomousDatabaseBackup>
  ListAutonomousDatabaseBackups(
      google::cloud::oracledatabase::v1::ListAutonomousDatabaseBackupsRequest
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>>
  StopAutonomousDatabase(
      google::cloud::oracledatabase::v1::StopAutonomousDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> StopAutonomousDatabase(
      NoAwaitTag,
      google::cloud::oracledatabase::v1::StopAutonomousDatabaseRequest const&
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>>
  StopAutonomousDatabase(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>>
  StartAutonomousDatabase(
      google::cloud::oracledatabase::v1::StartAutonomousDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> StartAutonomousDatabase(
      NoAwaitTag,
      google::cloud::oracledatabase::v1::StartAutonomousDatabaseRequest const&
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>>
  StartAutonomousDatabase(
      google::longrunning::Operation const& operation) override;

  future<StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>>
  RestartAutonomousDatabase(
      google::cloud::oracledatabase::v1::RestartAutonomousDatabaseRequest const&
          request) override;

  StatusOr<google::longrunning::Operation> RestartAutonomousDatabase(
      NoAwaitTag,
      google::cloud::oracledatabase::v1::RestartAutonomousDatabaseRequest const&
          request) override;

  future<StatusOr<google::cloud::oracledatabase::v1::AutonomousDatabase>>
  RestartAutonomousDatabase(
      google::longrunning::Operation const& operation) override;

  StreamRange<google::cloud::location::Location> ListLocations(
      google::cloud::location::ListLocationsRequest request) override;

  StatusOr<google::cloud::location::Location> GetLocation(
      google::cloud::location::GetLocationRequest const& request) override;

  StreamRange<google::longrunning::Operation> ListOperations(
      google::longrunning::ListOperationsRequest request) override;

  StatusOr<google::longrunning::Operation> GetOperation(
      google::longrunning::GetOperationRequest const& request) override;

  Status DeleteOperation(
      google::longrunning::DeleteOperationRequest const& request) override;

  Status CancelOperation(
      google::longrunning::CancelOperationRequest const& request) override;

 private:
  std::shared_ptr<oracledatabase_v1::OracleDatabaseConnection> child_;
};

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

/**
 * Conditionally applies the tracing decorator to the given connection.
 *
 * The connection is only decorated if tracing is enabled (as determined by the
 * connection's options).
 */
std::shared_ptr<oracledatabase_v1::OracleDatabaseConnection>
MakeOracleDatabaseTracingConnection(
    std::shared_ptr<oracledatabase_v1::OracleDatabaseConnection> conn);

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace oracledatabase_v1_internal
}  // namespace cloud
}  // namespace google

#endif  // GOOGLE_CLOUD_CPP_GOOGLE_CLOUD_ORACLEDATABASE_V1_INTERNAL_ORACLE_DATABASE_TRACING_CONNECTION_H
