/*=========================================================================
*
*  Copyright Insight Software Consortium
*
*  Licensed under the Apache License, Version 2.0 (the "License");
*  you may not use this file except in compliance with the License.
*  You may obtain a copy of the License at
*
*         http://www.apache.org/licenses/LICENSE-2.0.txt
*
*  Unless required by applicable law or agreed to in writing, software
*  distributed under the License is distributed on an "AS IS" BASIS,
*  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
*  See the License for the specific language governing permissions and
*  limitations under the License.
*
*=========================================================================*/
#ifndef __SimpleITK_h
#define __SimpleITK_h

/** \file SimpleITK.h
 *
 * Image C++ operators are not include by default in this file is an
 * intentional  design  choice. The addition of these convenience
 * mathematical operators in C++ can be a source of confusion.
 *
 * To enable Image C++ operators explicitly include
 * sitkImageOperators.h header file.
 */

#include <stdint.h>



// Utility classes
#include "sitkMacro.h"
#include "sitkDetail.h"
#include "sitkVersion.h"
#include "sitkImage.h"
#include "sitkShow.h"

#include "sitkInterpolator.h"
#include "sitkEvent.h"
#include "sitkRandomSeed.h"

#include "sitkProcessObject.h"
#include "sitkImageFilter.h"
#include "sitkCommand.h"
#include "sitkFunctionCommand.h"

// IO classes
#include "sitkImageFileReader.h"
#include "sitkImageSeriesReader.h"
#include "sitkImageFileWriter.h"
#include "sitkImageSeriesWriter.h"
#include "sitkImportImageFilter.h"

#include "sitkHashImageFilter.h"
#include "sitkJoinSeriesImageFilter.h"
#include "sitkComposeImageFilter.h"
#include "sitkPixelIDTypeLists.h"

#include "sitkCastImageFilter.h"

#include "sitkElastixImageFilter.h"
#include "sitkTransformixImageFilter.h"

// These headers are auto-generated
#include "SimpleITKBasicFiltersGeneratedHeaders.h"
#endif
