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

// Qt includes
#include <QDebug>

// SlicerQt includes
#include "qSlicerSurfaceToolbox2ModuleWidget.h"
#include "ui_qSlicerSurfaceToolbox2ModuleWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_ExtensionTemplate
class qSlicerSurfaceToolbox2ModuleWidgetPrivate: public Ui_qSlicerSurfaceToolbox2ModuleWidget
{
public:
  qSlicerSurfaceToolbox2ModuleWidgetPrivate();
};

//-----------------------------------------------------------------------------
// qSlicerSurfaceToolbox2ModuleWidgetPrivate methods

//-----------------------------------------------------------------------------
qSlicerSurfaceToolbox2ModuleWidgetPrivate::qSlicerSurfaceToolbox2ModuleWidgetPrivate()
{
}

//-----------------------------------------------------------------------------
// qSlicerSurfaceToolbox2ModuleWidget methods

//-----------------------------------------------------------------------------
qSlicerSurfaceToolbox2ModuleWidget::qSlicerSurfaceToolbox2ModuleWidget(QWidget* _parent)
  : Superclass( _parent )
  , d_ptr( new qSlicerSurfaceToolbox2ModuleWidgetPrivate )
{
}

//-----------------------------------------------------------------------------
qSlicerSurfaceToolbox2ModuleWidget::~qSlicerSurfaceToolbox2ModuleWidget()
{
}

//-----------------------------------------------------------------------------
void qSlicerSurfaceToolbox2ModuleWidget::setup()
{
  Q_D(qSlicerSurfaceToolbox2ModuleWidget);
  d->setupUi(this);
  this->Superclass::setup();
}
