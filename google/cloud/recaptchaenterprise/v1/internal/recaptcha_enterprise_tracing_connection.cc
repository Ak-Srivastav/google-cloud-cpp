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
// source: google/cloud/recaptchaenterprise/v1/recaptchaenterprise.proto

#include "google/cloud/recaptchaenterprise/v1/internal/recaptcha_enterprise_tracing_connection.h"
#include "google/cloud/internal/opentelemetry.h"
#include "google/cloud/internal/traced_stream_range.h"
#include <memory>
#include <utility>

namespace google {
namespace cloud {
namespace recaptchaenterprise_v1_internal {
GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_BEGIN

#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

RecaptchaEnterpriseServiceTracingConnection::
    RecaptchaEnterpriseServiceTracingConnection(
        std::shared_ptr<
            recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection>
            child)
    : child_(std::move(child)) {}

StatusOr<google::cloud::recaptchaenterprise::v1::Assessment>
RecaptchaEnterpriseServiceTracingConnection::CreateAssessment(
    google::cloud::recaptchaenterprise::v1::CreateAssessmentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "CreateAssessment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateAssessment(request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::AnnotateAssessmentResponse>
RecaptchaEnterpriseServiceTracingConnection::AnnotateAssessment(
    google::cloud::recaptchaenterprise::v1::AnnotateAssessmentRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "AnnotateAssessment");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AnnotateAssessment(request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceTracingConnection::CreateKey(
    google::cloud::recaptchaenterprise::v1::CreateKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "CreateKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateKey(request));
}

StreamRange<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceTracingConnection::ListKeys(
    google::cloud::recaptchaenterprise::v1::ListKeysRequest request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::ListKeys");
  internal::OTelScope scope(span);
  auto sr = child_->ListKeys(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::recaptchaenterprise::v1::Key>(std::move(span),
                                                   std::move(sr));
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::RetrieveLegacySecretKeyResponse>
RecaptchaEnterpriseServiceTracingConnection::RetrieveLegacySecretKey(
    google::cloud::recaptchaenterprise::v1::
        RetrieveLegacySecretKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "RetrieveLegacySecretKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RetrieveLegacySecretKey(request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceTracingConnection::GetKey(
    google::cloud::recaptchaenterprise::v1::GetKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::GetKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetKey(request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceTracingConnection::UpdateKey(
    google::cloud::recaptchaenterprise::v1::UpdateKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "UpdateKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateKey(request));
}

Status RecaptchaEnterpriseServiceTracingConnection::DeleteKey(
    google::cloud::recaptchaenterprise::v1::DeleteKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "DeleteKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteKey(request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::Key>
RecaptchaEnterpriseServiceTracingConnection::MigrateKey(
    google::cloud::recaptchaenterprise::v1::MigrateKeyRequest const& request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "MigrateKey");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->MigrateKey(request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::AddIpOverrideResponse>
RecaptchaEnterpriseServiceTracingConnection::AddIpOverride(
    google::cloud::recaptchaenterprise::v1::AddIpOverrideRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "AddIpOverride");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->AddIpOverride(request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::RemoveIpOverrideResponse>
RecaptchaEnterpriseServiceTracingConnection::RemoveIpOverride(
    google::cloud::recaptchaenterprise::v1::RemoveIpOverrideRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "RemoveIpOverride");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->RemoveIpOverride(request));
}

StreamRange<google::cloud::recaptchaenterprise::v1::IpOverrideData>
RecaptchaEnterpriseServiceTracingConnection::ListIpOverrides(
    google::cloud::recaptchaenterprise::v1::ListIpOverridesRequest request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "ListIpOverrides");
  internal::OTelScope scope(span);
  auto sr = child_->ListIpOverrides(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::recaptchaenterprise::v1::IpOverrideData>(std::move(span),
                                                              std::move(sr));
}

StatusOr<google::cloud::recaptchaenterprise::v1::Metrics>
RecaptchaEnterpriseServiceTracingConnection::GetMetrics(
    google::cloud::recaptchaenterprise::v1::GetMetricsRequest const& request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "GetMetrics");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetMetrics(request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceTracingConnection::CreateFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::CreateFirewallPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "CreateFirewallPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->CreateFirewallPolicy(request));
}

StreamRange<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceTracingConnection::ListFirewallPolicies(
    google::cloud::recaptchaenterprise::v1::ListFirewallPoliciesRequest
        request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "ListFirewallPolicies");
  internal::OTelScope scope(span);
  auto sr = child_->ListFirewallPolicies(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::recaptchaenterprise::v1::FirewallPolicy>(std::move(span),
                                                              std::move(sr));
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceTracingConnection::GetFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::GetFirewallPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "GetFirewallPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->GetFirewallPolicy(request));
}

StatusOr<google::cloud::recaptchaenterprise::v1::FirewallPolicy>
RecaptchaEnterpriseServiceTracingConnection::UpdateFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::UpdateFirewallPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "UpdateFirewallPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->UpdateFirewallPolicy(request));
}

Status RecaptchaEnterpriseServiceTracingConnection::DeleteFirewallPolicy(
    google::cloud::recaptchaenterprise::v1::DeleteFirewallPolicyRequest const&
        request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "DeleteFirewallPolicy");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->DeleteFirewallPolicy(request));
}

StatusOr<
    google::cloud::recaptchaenterprise::v1::ReorderFirewallPoliciesResponse>
RecaptchaEnterpriseServiceTracingConnection::ReorderFirewallPolicies(
    google::cloud::recaptchaenterprise::v1::
        ReorderFirewallPoliciesRequest const& request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "ReorderFirewallPolicies");
  auto scope = opentelemetry::trace::Scope(span);
  return internal::EndSpan(*span, child_->ReorderFirewallPolicies(request));
}

StreamRange<google::cloud::recaptchaenterprise::v1::RelatedAccountGroup>
RecaptchaEnterpriseServiceTracingConnection::ListRelatedAccountGroups(
    google::cloud::recaptchaenterprise::v1::ListRelatedAccountGroupsRequest
        request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "ListRelatedAccountGroups");
  internal::OTelScope scope(span);
  auto sr = child_->ListRelatedAccountGroups(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::recaptchaenterprise::v1::RelatedAccountGroup>(
      std::move(span), std::move(sr));
}

StreamRange<
    google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>
RecaptchaEnterpriseServiceTracingConnection::ListRelatedAccountGroupMemberships(
    google::cloud::recaptchaenterprise::v1::
        ListRelatedAccountGroupMembershipsRequest request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "ListRelatedAccountGroupMemberships");
  internal::OTelScope scope(span);
  auto sr = child_->ListRelatedAccountGroupMemberships(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>(
      std::move(span), std::move(sr));
}

StreamRange<
    google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>
RecaptchaEnterpriseServiceTracingConnection::
    SearchRelatedAccountGroupMemberships(
        google::cloud::recaptchaenterprise::v1::
            SearchRelatedAccountGroupMembershipsRequest request) {
  auto span = internal::MakeSpan(
      "recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection::"
      "SearchRelatedAccountGroupMemberships");
  internal::OTelScope scope(span);
  auto sr = child_->SearchRelatedAccountGroupMemberships(std::move(request));
  return internal::MakeTracedStreamRange<
      google::cloud::recaptchaenterprise::v1::RelatedAccountGroupMembership>(
      std::move(span), std::move(sr));
}

#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY

std::shared_ptr<recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection>
MakeRecaptchaEnterpriseServiceTracingConnection(
    std::shared_ptr<
        recaptchaenterprise_v1::RecaptchaEnterpriseServiceConnection>
        conn) {
#ifdef GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  if (internal::TracingEnabled(conn->options())) {
    conn = std::make_shared<RecaptchaEnterpriseServiceTracingConnection>(
        std::move(conn));
  }
#endif  // GOOGLE_CLOUD_CPP_HAVE_OPENTELEMETRY
  return conn;
}

GOOGLE_CLOUD_CPP_INLINE_NAMESPACE_END
}  // namespace recaptchaenterprise_v1_internal
}  // namespace cloud
}  // namespace google
