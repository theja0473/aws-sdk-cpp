﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#include <aws/mediaconvert/model/RespondToAfd.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace MediaConvert
  {
    namespace Model
    {
      namespace RespondToAfdMapper
      {

        static const int NONE_HASH = HashingUtils::HashString("NONE");
        static const int RESPOND_HASH = HashingUtils::HashString("RESPOND");
        static const int PASSTHROUGH_HASH = HashingUtils::HashString("PASSTHROUGH");


        RespondToAfd GetRespondToAfdForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == NONE_HASH)
          {
            return RespondToAfd::NONE;
          }
          else if (hashCode == RESPOND_HASH)
          {
            return RespondToAfd::RESPOND;
          }
          else if (hashCode == PASSTHROUGH_HASH)
          {
            return RespondToAfd::PASSTHROUGH;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<RespondToAfd>(hashCode);
          }

          return RespondToAfd::NOT_SET;
        }

        Aws::String GetNameForRespondToAfd(RespondToAfd enumValue)
        {
          switch(enumValue)
          {
          case RespondToAfd::NONE:
            return "NONE";
          case RespondToAfd::RESPOND:
            return "RESPOND";
          case RespondToAfd::PASSTHROUGH:
            return "PASSTHROUGH";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return "";
          }
        }

      } // namespace RespondToAfdMapper
    } // namespace Model
  } // namespace MediaConvert
} // namespace Aws
