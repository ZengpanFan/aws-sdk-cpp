﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/elasticfilesystem/EFS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/elasticfilesystem/model/LifeCycleState.h>
#include <aws/elasticfilesystem/model/FileSystemSize.h>
#include <aws/elasticfilesystem/model/PerformanceMode.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace EFS
{
namespace Model
{
  /**
   * <p>Description of the file system.</p>
   */
  class AWS_EFS_API CreateFileSystemResult
  {
  public:
    CreateFileSystemResult();
    CreateFileSystemResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CreateFileSystemResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>AWS account that created the file system. If the file system was created by
     * an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>AWS account that created the file system. If the file system was created by
     * an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerId = value; }

    /**
     * <p>AWS account that created the file system. If the file system was created by
     * an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerId = value; }

    /**
     * <p>AWS account that created the file system. If the file system was created by
     * an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerId.assign(value); }

    /**
     * <p>AWS account that created the file system. If the file system was created by
     * an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline CreateFileSystemResult& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>AWS account that created the file system. If the file system was created by
     * an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline CreateFileSystemResult& WithOwnerId(Aws::String&& value) { SetOwnerId(value); return *this;}

    /**
     * <p>AWS account that created the file system. If the file system was created by
     * an IAM user, the parent account to which the user belongs is the owner.</p>
     */
    inline CreateFileSystemResult& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}

    /**
     * <p>Opaque string specified in the request.</p>
     */
    inline const Aws::String& GetCreationToken() const{ return m_creationToken; }

    /**
     * <p>Opaque string specified in the request.</p>
     */
    inline void SetCreationToken(const Aws::String& value) { m_creationToken = value; }

    /**
     * <p>Opaque string specified in the request.</p>
     */
    inline void SetCreationToken(Aws::String&& value) { m_creationToken = value; }

    /**
     * <p>Opaque string specified in the request.</p>
     */
    inline void SetCreationToken(const char* value) { m_creationToken.assign(value); }

    /**
     * <p>Opaque string specified in the request.</p>
     */
    inline CreateFileSystemResult& WithCreationToken(const Aws::String& value) { SetCreationToken(value); return *this;}

    /**
     * <p>Opaque string specified in the request.</p>
     */
    inline CreateFileSystemResult& WithCreationToken(Aws::String&& value) { SetCreationToken(value); return *this;}

    /**
     * <p>Opaque string specified in the request.</p>
     */
    inline CreateFileSystemResult& WithCreationToken(const char* value) { SetCreationToken(value); return *this;}

    /**
     * <p>ID of the file system, assigned by Amazon EFS.</p>
     */
    inline const Aws::String& GetFileSystemId() const{ return m_fileSystemId; }

    /**
     * <p>ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(const Aws::String& value) { m_fileSystemId = value; }

    /**
     * <p>ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(Aws::String&& value) { m_fileSystemId = value; }

    /**
     * <p>ID of the file system, assigned by Amazon EFS.</p>
     */
    inline void SetFileSystemId(const char* value) { m_fileSystemId.assign(value); }

    /**
     * <p>ID of the file system, assigned by Amazon EFS.</p>
     */
    inline CreateFileSystemResult& WithFileSystemId(const Aws::String& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system, assigned by Amazon EFS.</p>
     */
    inline CreateFileSystemResult& WithFileSystemId(Aws::String&& value) { SetFileSystemId(value); return *this;}

    /**
     * <p>ID of the file system, assigned by Amazon EFS.</p>
     */
    inline CreateFileSystemResult& WithFileSystemId(const char* value) { SetFileSystemId(value); return *this;}

    /**
     * <p>Time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>Time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>Time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = value; }

    /**
     * <p>Time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline CreateFileSystemResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Time that the file system was created, in seconds (since
     * 1970-01-01T00:00:00Z).</p>
     */
    inline CreateFileSystemResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(value); return *this;}

    /**
     * <p>Lifecycle phase of the file system.</p>
     */
    inline const LifeCycleState& GetLifeCycleState() const{ return m_lifeCycleState; }

    /**
     * <p>Lifecycle phase of the file system.</p>
     */
    inline void SetLifeCycleState(const LifeCycleState& value) { m_lifeCycleState = value; }

    /**
     * <p>Lifecycle phase of the file system.</p>
     */
    inline void SetLifeCycleState(LifeCycleState&& value) { m_lifeCycleState = value; }

    /**
     * <p>Lifecycle phase of the file system.</p>
     */
    inline CreateFileSystemResult& WithLifeCycleState(const LifeCycleState& value) { SetLifeCycleState(value); return *this;}

    /**
     * <p>Lifecycle phase of the file system.</p>
     */
    inline CreateFileSystemResult& WithLifeCycleState(LifeCycleState&& value) { SetLifeCycleState(value); return *this;}

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateTags</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateTags</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateTags</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline void SetName(Aws::String&& value) { m_name = value; }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateTags</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateTags</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline CreateFileSystemResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateTags</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline CreateFileSystemResult& WithName(Aws::String&& value) { SetName(value); return *this;}

    /**
     * <p>You can add tags to a file system, including a <code>Name</code> tag. For
     * more information, see <a>CreateTags</a>. If the file system has a
     * <code>Name</code> tag, Amazon EFS returns the value in this field. </p>
     */
    inline CreateFileSystemResult& WithName(const char* value) { SetName(value); return *this;}

    /**
     * <p>Current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline int GetNumberOfMountTargets() const{ return m_numberOfMountTargets; }

    /**
     * <p>Current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline void SetNumberOfMountTargets(int value) { m_numberOfMountTargets = value; }

    /**
     * <p>Current number of mount targets that the file system has. For more
     * information, see <a>CreateMountTarget</a>.</p>
     */
    inline CreateFileSystemResult& WithNumberOfMountTargets(int value) { SetNumberOfMountTargets(value); return *this;}

    /**
     * <p>Latest known metered size (in bytes) of data stored in the file system, in
     * bytes, in its <code>Value</code> field, and the time at which that size was
     * determined in its <code>Timestamp</code> field. The <code>Timestamp</code> value
     * is the integer number of seconds since 1970-01-01T00:00:00Z. Note that the value
     * does not represent the size of a consistent snapshot of the file system, but it
     * is eventually consistent when there are no writes to the file system. That is,
     * the value will represent actual size only if the file system is not modified for
     * a period longer than a couple of hours. Otherwise, the value is not the exact
     * size the file system was at any instant in time. </p>
     */
    inline const FileSystemSize& GetSizeInBytes() const{ return m_sizeInBytes; }

    /**
     * <p>Latest known metered size (in bytes) of data stored in the file system, in
     * bytes, in its <code>Value</code> field, and the time at which that size was
     * determined in its <code>Timestamp</code> field. The <code>Timestamp</code> value
     * is the integer number of seconds since 1970-01-01T00:00:00Z. Note that the value
     * does not represent the size of a consistent snapshot of the file system, but it
     * is eventually consistent when there are no writes to the file system. That is,
     * the value will represent actual size only if the file system is not modified for
     * a period longer than a couple of hours. Otherwise, the value is not the exact
     * size the file system was at any instant in time. </p>
     */
    inline void SetSizeInBytes(const FileSystemSize& value) { m_sizeInBytes = value; }

    /**
     * <p>Latest known metered size (in bytes) of data stored in the file system, in
     * bytes, in its <code>Value</code> field, and the time at which that size was
     * determined in its <code>Timestamp</code> field. The <code>Timestamp</code> value
     * is the integer number of seconds since 1970-01-01T00:00:00Z. Note that the value
     * does not represent the size of a consistent snapshot of the file system, but it
     * is eventually consistent when there are no writes to the file system. That is,
     * the value will represent actual size only if the file system is not modified for
     * a period longer than a couple of hours. Otherwise, the value is not the exact
     * size the file system was at any instant in time. </p>
     */
    inline void SetSizeInBytes(FileSystemSize&& value) { m_sizeInBytes = value; }

    /**
     * <p>Latest known metered size (in bytes) of data stored in the file system, in
     * bytes, in its <code>Value</code> field, and the time at which that size was
     * determined in its <code>Timestamp</code> field. The <code>Timestamp</code> value
     * is the integer number of seconds since 1970-01-01T00:00:00Z. Note that the value
     * does not represent the size of a consistent snapshot of the file system, but it
     * is eventually consistent when there are no writes to the file system. That is,
     * the value will represent actual size only if the file system is not modified for
     * a period longer than a couple of hours. Otherwise, the value is not the exact
     * size the file system was at any instant in time. </p>
     */
    inline CreateFileSystemResult& WithSizeInBytes(const FileSystemSize& value) { SetSizeInBytes(value); return *this;}

    /**
     * <p>Latest known metered size (in bytes) of data stored in the file system, in
     * bytes, in its <code>Value</code> field, and the time at which that size was
     * determined in its <code>Timestamp</code> field. The <code>Timestamp</code> value
     * is the integer number of seconds since 1970-01-01T00:00:00Z. Note that the value
     * does not represent the size of a consistent snapshot of the file system, but it
     * is eventually consistent when there are no writes to the file system. That is,
     * the value will represent actual size only if the file system is not modified for
     * a period longer than a couple of hours. Otherwise, the value is not the exact
     * size the file system was at any instant in time. </p>
     */
    inline CreateFileSystemResult& WithSizeInBytes(FileSystemSize&& value) { SetSizeInBytes(value); return *this;}

    /**
     * <p>The <code>PerformanceMode</code> of the file system.</p>
     */
    inline const PerformanceMode& GetPerformanceMode() const{ return m_performanceMode; }

    /**
     * <p>The <code>PerformanceMode</code> of the file system.</p>
     */
    inline void SetPerformanceMode(const PerformanceMode& value) { m_performanceMode = value; }

    /**
     * <p>The <code>PerformanceMode</code> of the file system.</p>
     */
    inline void SetPerformanceMode(PerformanceMode&& value) { m_performanceMode = value; }

    /**
     * <p>The <code>PerformanceMode</code> of the file system.</p>
     */
    inline CreateFileSystemResult& WithPerformanceMode(const PerformanceMode& value) { SetPerformanceMode(value); return *this;}

    /**
     * <p>The <code>PerformanceMode</code> of the file system.</p>
     */
    inline CreateFileSystemResult& WithPerformanceMode(PerformanceMode&& value) { SetPerformanceMode(value); return *this;}

  private:
    Aws::String m_ownerId;
    Aws::String m_creationToken;
    Aws::String m_fileSystemId;
    Aws::Utils::DateTime m_creationTime;
    LifeCycleState m_lifeCycleState;
    Aws::String m_name;
    int m_numberOfMountTargets;
    FileSystemSize m_sizeInBytes;
    PerformanceMode m_performanceMode;
  };

} // namespace Model
} // namespace EFS
} // namespace Aws
