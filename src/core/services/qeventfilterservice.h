/****************************************************************************
**
** Copyright (C) 2015 Paul Lemire (paul.lemire350@gmail.com)
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt3D module of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL3$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see http://www.qt.io/terms-conditions. For further
** information use the contact form at http://www.qt.io/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 3 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPLv3 included in the
** packaging of this file. Please review the following information to
** ensure the GNU Lesser General Public License version 3 requirements
** will be met: https://www.gnu.org/licenses/lgpl.html.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 2.0 or later as published by the Free
** Software Foundation and appearing in the file LICENSE.GPL included in
** the packaging of this file. Please review the following information to
** ensure the GNU General Public License version 2.0 requirements will be
** met: http://www.gnu.org/licenses/gpl-2.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#ifndef QT3DCORE_QEVENTFILTERSERVICE_H
#define QT3DCORE_QEVENTFILTERSERVICE_H

#include <Qt3DCore/qt3dcore_global.h>
#include <Qt3DCore/qservicelocator.h>

QT_BEGIN_NAMESPACE

namespace Qt3DCore {

class QEventFilterServicePrivate;

class QT3DCORESHARED_EXPORT QEventFilterService : public QAbstractServiceProvider
{
public:
    QEventFilterService();
    ~QEventFilterService();

    void initialize(QObject *eventSource);
    void registerEventFilter(QObject *eventFilter, int priority);
    void unregisterEventFilter(QObject *eventFilter);

private:
    Q_DECLARE_PRIVATE(QEventFilterService)
};

} // Qt3DCore

QT_END_NAMESPACE

#endif // QT3DCORE_QEVENTFILTERSERVICE_H
