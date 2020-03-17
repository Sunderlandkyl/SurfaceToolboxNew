/*==============================================================================

  Program: 3D Slicer

  Copyright (c) Kitware Inc.

  See COPYRIGHT.txt
  or http://www.slicer.org/copyright/copyright.txt for details.

  Unless required by applicable law or agreed to in writing, software
  distributed under the License is distributed on an "AS IS" BASIS,
  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  See the License for the specific language governing permissions and
  limitations under the License.

  This file was originally developed by Jean-Christophe Fillion-Robin, Kitware Inc.
  and was partially funded by NIH grant 3P41RR013218-12S1

==============================================================================*/

// FooBar Widgets includes
#include "qSlicerSurfaceToolbox2FooBarWidget.h"
#include "ui_qSlicerSurfaceToolbox2FooBarWidget.h"

//-----------------------------------------------------------------------------
/// \ingroup Slicer_QtModules_SurfaceToolbox2
class qSlicerSurfaceToolbox2FooBarWidgetPrivate
  : public Ui_qSlicerSurfaceToolbox2FooBarWidget
{
  Q_DECLARE_PUBLIC(qSlicerSurfaceToolbox2FooBarWidget);
protected:
  qSlicerSurfaceToolbox2FooBarWidget* const q_ptr;

public:
  qSlicerSurfaceToolbox2FooBarWidgetPrivate(
    qSlicerSurfaceToolbox2FooBarWidget& object);
  virtual void setupUi(qSlicerSurfaceToolbox2FooBarWidget*);
};

// --------------------------------------------------------------------------
qSlicerSurfaceToolbox2FooBarWidgetPrivate
::qSlicerSurfaceToolbox2FooBarWidgetPrivate(
  qSlicerSurfaceToolbox2FooBarWidget& object)
  : q_ptr(&object)
{
}

// --------------------------------------------------------------------------
void qSlicerSurfaceToolbox2FooBarWidgetPrivate
::setupUi(qSlicerSurfaceToolbox2FooBarWidget* widget)
{
  this->Ui_qSlicerSurfaceToolbox2FooBarWidget::setupUi(widget);
}

//-----------------------------------------------------------------------------
// qSlicerSurfaceToolbox2FooBarWidget methods

//-----------------------------------------------------------------------------
qSlicerSurfaceToolbox2FooBarWidget
::qSlicerSurfaceToolbox2FooBarWidget(QWidget* parentWidget)
  : Superclass( parentWidget )
  , d_ptr( new qSlicerSurfaceToolbox2FooBarWidgetPrivate(*this) )
{
  Q_D(qSlicerSurfaceToolbox2FooBarWidget);
  d->setupUi(this);
}

//-----------------------------------------------------------------------------
qSlicerSurfaceToolbox2FooBarWidget
::~qSlicerSurfaceToolbox2FooBarWidget()
{
}
