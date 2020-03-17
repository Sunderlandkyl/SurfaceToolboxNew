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

// SurfaceToolbox2 Logic includes
#include <vtkSlicerSurfaceToolbox2Logic.h>

// SurfaceToolbox2 includes
#include "qSlicerSurfaceToolbox2Module.h"
#include "qSlicerSurfaceToolbox2ModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerSurfaceToolbox2ModulePrivate
{
public:
  qSlicerSurfaceToolbox2ModulePrivate();
};

//-----------------------------------------------------------------------------
// qSlicerSurfaceToolbox2ModulePrivate methods

//-----------------------------------------------------------------------------
qSlicerSurfaceToolbox2ModulePrivate::qSlicerSurfaceToolbox2ModulePrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerSurfaceToolbox2Module methods

//-----------------------------------------------------------------------------
qSlicerSurfaceToolbox2Module::qSlicerSurfaceToolbox2Module(QObject* _parent)
  : Superclass(_parent)
  , d_ptr(new qSlicerSurfaceToolbox2ModulePrivate)
{
}

//-----------------------------------------------------------------------------
qSlicerSurfaceToolbox2Module::~qSlicerSurfaceToolbox2Module()
{
}

//-----------------------------------------------------------------------------
QString qSlicerSurfaceToolbox2Module::helpText() const
{
  return "This is a loadable module that can be bundled in an extension";
}

//-----------------------------------------------------------------------------
QString qSlicerSurfaceToolbox2Module::acknowledgementText() const
{
  return "This work was partially funded by NIH grant NXNNXXNNNNNN-NNXN";
}

//-----------------------------------------------------------------------------
QStringList qSlicerSurfaceToolbox2Module::contributors() const
{
  QStringList moduleContributors;
  moduleContributors << QString("John Doe (AnyWare Corp.)");
  return moduleContributors;
}

//-----------------------------------------------------------------------------
QIcon qSlicerSurfaceToolbox2Module::icon() const
{
  return QIcon(":/Icons/SurfaceToolbox2.png");
}

//-----------------------------------------------------------------------------
QStringList qSlicerSurfaceToolbox2Module::categories() const
{
  return QStringList() << "Examples";
}

//-----------------------------------------------------------------------------
QStringList qSlicerSurfaceToolbox2Module::dependencies() const
{
  return QStringList();
}

//-----------------------------------------------------------------------------
void qSlicerSurfaceToolbox2Module::setup()
{
  this->Superclass::setup();
}

//-----------------------------------------------------------------------------
qSlicerAbstractModuleRepresentation* qSlicerSurfaceToolbox2Module
::createWidgetRepresentation()
{
  return new qSlicerSurfaceToolbox2ModuleWidget;
}

//-----------------------------------------------------------------------------
vtkMRMLAbstractLogic* qSlicerSurfaceToolbox2Module::createLogic()
{
  return vtkSlicerSurfaceToolbox2Logic::New();
}
