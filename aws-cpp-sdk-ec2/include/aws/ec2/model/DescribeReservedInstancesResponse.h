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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/ReservedInstances.h>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output for DescribeReservedInstances.</p>
   */
  class AWS_EC2_API DescribeReservedInstancesResponse
  {
  public:
    DescribeReservedInstancesResponse();
    DescribeReservedInstancesResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeReservedInstancesResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline const Aws::Vector<ReservedInstances>& GetReservedInstances() const{ return m_reservedInstances; }

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline void SetReservedInstances(const Aws::Vector<ReservedInstances>& value) { m_reservedInstances = value; }

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline void SetReservedInstances(Aws::Vector<ReservedInstances>&& value) { m_reservedInstances = value; }

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline DescribeReservedInstancesResponse& WithReservedInstances(const Aws::Vector<ReservedInstances>& value) { SetReservedInstances(value); return *this;}

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline DescribeReservedInstancesResponse& WithReservedInstances(Aws::Vector<ReservedInstances>&& value) { SetReservedInstances(value); return *this;}

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline DescribeReservedInstancesResponse& AddReservedInstances(const ReservedInstances& value) { m_reservedInstances.push_back(value); return *this; }

    /**
     * <p>A list of Reserved Instances.</p>
     */
    inline DescribeReservedInstancesResponse& AddReservedInstances(ReservedInstances&& value) { m_reservedInstances.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeReservedInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeReservedInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<ReservedInstances> m_reservedInstances;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws