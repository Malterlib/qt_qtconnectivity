/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -c OrgBluezAgentAdaptor -a agent_p.h:agent.cpp org.bluez.Agent.xml org.bluez.Agent
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "agent_p.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class OrgBluezAgentAdaptor
 */

OrgBluezAgentAdaptor::OrgBluezAgentAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

OrgBluezAgentAdaptor::~OrgBluezAgentAdaptor()
{
    // destructor
}

void OrgBluezAgentAdaptor::Authorize(const QDBusObjectPath &in0, const QString &in1)
{
    // handle method call org.bluez.Agent.Authorize
    QMetaObject::invokeMethod(parent(), "Authorize", Q_ARG(QDBusObjectPath, in0), Q_ARG(QString, in1));
}

void OrgBluezAgentAdaptor::Cancel()
{
    // handle method call org.bluez.Agent.Cancel
    QMetaObject::invokeMethod(parent(), "Cancel");
}

void OrgBluezAgentAdaptor::ConfirmModeChange(const QString &in0)
{
    // handle method call org.bluez.Agent.ConfirmModeChange
    QMetaObject::invokeMethod(parent(), "ConfirmModeChange", Q_ARG(QString, in0));
}

void OrgBluezAgentAdaptor::DisplayPasskey(const QDBusObjectPath &in0, uint in1, uchar in2)
{
    // handle method call org.bluez.Agent.DisplayPasskey
    QMetaObject::invokeMethod(parent(), "DisplayPasskey", Q_ARG(QDBusObjectPath, in0), Q_ARG(uint, in1), Q_ARG(uchar, in2));
}

void OrgBluezAgentAdaptor::Release()
{
    // handle method call org.bluez.Agent.Release
    QMetaObject::invokeMethod(parent(), "Release");
}

void OrgBluezAgentAdaptor::RequestConfirmation(const QDBusObjectPath &in0, uint in1)
{
    // handle method call org.bluez.Agent.RequestConfirmation
    QMetaObject::invokeMethod(parent(), "RequestConfirmation", Q_ARG(QDBusObjectPath, in0), Q_ARG(uint, in1));
}

uint OrgBluezAgentAdaptor::RequestPasskey(const QDBusObjectPath &in0)
{
    // handle method call org.bluez.Agent.RequestPasskey
    uint out0;
    QMetaObject::invokeMethod(parent(), "RequestPasskey", Q_RETURN_ARG(uint, out0), Q_ARG(QDBusObjectPath, in0));
    return out0;
}

QString OrgBluezAgentAdaptor::RequestPinCode(const QDBusObjectPath &in0)
{
    // handle method call org.bluez.Agent.RequestPinCode
    QString out0;
    QMetaObject::invokeMethod(parent(), "RequestPinCode", Q_RETURN_ARG(QString, out0), Q_ARG(QDBusObjectPath, in0));
    return out0;
}

