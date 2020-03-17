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

#ifndef __qSlicerSurfaceToolbox2FooBarWidget_h
#define __qSlicerSurfaceToolbox2FooBarWidget_h

// Qt includes
#include <QWidget>

// FooBar Widgets includes
#include "qSlicerSurfaceToolbox2ModuleWidgetsExport.h"

class qSlicerSurfaceToolbox2FooBarWidgetPrivate;

/// \ingroup Slicer_QtModules_SurfaceToolbox2
class Q_SLICER_MODULE_SURFACETOOLBOX2_WIDGETS_EXPORT qSlicerSurfaceToolbox2FooBarWidget
  : public QWidget
{
  Q_OBJECT
public:
  typedef QWidget Superclass;
  qSlicerSurfaceToolbox2FooBarWidget(QWidget *parent=0);
  virtual ~qSlicerSurfaceToolbox2FooBarWidget();

protected slots:

protected:
  QScopedPointer<qSlicerSurfaceToolbox2FooBarWidgetPrivate> d_ptr;

private:
  Q_DECLARE_PRIVATE(qSlicerSurfaceToolbox2FooBarWidget);
  Q_DISABLE_COPY(qSlicerSurfaceToolbox2FooBarWidget);
};

#endif
