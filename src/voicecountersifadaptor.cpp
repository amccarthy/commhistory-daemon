/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c VoiceCountersIfAdaptor -a voicecountersifadaptor VoiceCountersIf.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Digia Plc and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "voicecountersifadaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class VoiceCountersIfAdaptor
 */

VoiceCountersIfAdaptor::VoiceCountersIfAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

VoiceCountersIfAdaptor::~VoiceCountersIfAdaptor()
{
    // destructor
}

QVariantMap VoiceCountersIfAdaptor::getCounters()
{
    // handle method call org.nemomobile.VoiceCountersIf.getCounters
    QVariantMap counters;
    QMetaObject::invokeMethod(parent(), "getCounters", Q_RETURN_ARG(QVariantMap, counters));
    return counters;
}

void VoiceCountersIfAdaptor::resetCounters()
{
    // handle method call org.nemomobile.VoiceCountersIf.resetCounters
    QMetaObject::invokeMethod(parent(), "resetCounters");
}
