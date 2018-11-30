#include "arduinocommunication.h"
#include "string"

using namespace std;

ArduinoCommunication::ArduinoCommunication(bool a, bool b,bool c, bool d,bool e, string f,bool g, int h)
{
    SetValueIsRecord(a);
    SetValueVideoSignal(b);
    SetValueTelemetry(c);
    SetValueArmed(d);
    SetValueApplicationStart(e);
    SetValueCustomMode(f);
    SetValueGPS3DFix(g,false);
    SetValueBatteryStatus(h);
    SetArduinoConnection(true);
}
void ArduinoCommunication::SetArduinoConnection(bool x)
{
    IsArduinoConnection=x;
}
void ArduinoCommunication::SetValueIsRecord(bool a)
{
    if(a)
        IsRecord="L";
    else
        IsRecord="H";
}
void ArduinoCommunication::SetValueVideoSignal(bool b)
{
    if(b)
        VideoSignal="L";
    else
        VideoSignal="H";
}

void ArduinoCommunication::SetValueTelemetry(bool c)
{
    if(c)
        Telemetry="L";
    else
        Telemetry="H";
}
void ArduinoCommunication::SetValueArmed(bool d)
{
    if(d)
        Armed="L";
    else
        Armed="H";
}
void ArduinoCommunication::SetValueApplicationStart(bool e)
{
    if(e)
        ApplicationStart="L";
    else
        ApplicationStart="H";
}

void ArduinoCommunication::SetValueCustomMode(std::string f)
{
    CustomMode=f;
}

void ArduinoCommunication::SetValueGPS3DFix(bool g,bool h)
{
    IsSendMessage=h;
    if(g)
        GPS3DFix="L";
    else
        GPS3DFix="H";
}
void ArduinoCommunication::SetValueBatteryStatus(int h)
{
    BatteryStatus=h;
}
void ArduinoCommunication::SetLastValue(string f)
{
    LastValue=f;
}
std::string ArduinoCommunication::GetValue()
{
    string s="KY"+IsRecord+"VY"+VideoSignal+"TY"+Telemetry+"AL"+Armed+"S"+ApplicationStart+"C"+CustomMode+"GPF"+GPS3DFix+"DB"+std::to_string(BatteryStatus);
    return s;
}
std::string ArduinoCommunication::GetIsRecord()
{
    string s="KY"+IsRecord;
    return s;
}
std::string ArduinoCommunication::GetVideoSignal()
{
    string s="VY"+VideoSignal;
    return s;
}
std::string ArduinoCommunication::GetTelemetry()
{
    string s="TY"+Telemetry;
    return s;
}
std::string ArduinoCommunication::GetArmed()
{
    string s="AL"+Armed;
    return s;
}
std::string ArduinoCommunication::GetApplicationStart()
{
    string s="S"+ApplicationStart;
    return s;
}
std::string ArduinoCommunication::GetCustomMode()
{
    string s="C"+CustomMode;
    return s;
}
std::string ArduinoCommunication::GetGPS3DFix()
{
    string s="GPF"+GPS3DFix;
    return s;
}
std::string ArduinoCommunication::GetBatteryStatus()
{
    string s="DB"+std::to_string(BatteryStatus);
    return s;
}
std::string ArduinoCommunication::GetLastValue()
{
    return LastValue;
}
bool ArduinoCommunication::GetIsSendMessage()
{
    return  IsSendMessage;
}
bool ArduinoCommunication::GetArduinoConnection()
{
    return  IsArduinoConnection;
}
