/*==============================================================================

  Program: 3D Slicer

  Portions (c) Copyright Brigham and Women's Hospital (BWH) All Rights Reserved.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

==============================================================================*/

#ifndef __qSlicerSurfaceToolbox2ModuleWidget_h
#define __qSlicerSurfaceToolbox2ModuleWidget_h

// SlicerQt includes
#include "qSlicerAbstractModuleWidget.h"

#include "qSlicerSurfaceToolbox2ModuleExport.h"

class qSlicerSurfaceToolbox2ModuleWidgetPrivate;
class vtkMRMLNode;

/// \ingroup Slicer_QtModules_ExtensionTemplate
class Q_SLICER_QTMODULES_SURFACETOOLBOX2_EXPORT qSlicerSurfaceToolbox2ModuleWidget :
  public qSlicerAbstractModuleWidget
{
  Q_OBJECT

public:

  typedef qSlicerAbstractModuleWidget Superclass;
  qSlicerSurfaceToolbox2ModuleWidget(QWidget *parent=0);
  virtual ~qSlicerSurfaceToolbox2ModuleWidget();

public slots:


protected:
  QScopedPointer<qSlicerSurfaceToolbox2ModuleWidgetPrivate> d_ptr;

  virtual void setup();

private:
  Q_DECLARE_PRIVATE(qSlicerSurfaceToolbox2ModuleWidget);
  Q_DISABLE_COPY(qSlicerSurfaceToolbox2ModuleWidget);
};

#endif
