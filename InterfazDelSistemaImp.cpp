#include "InterfazDelSistemaImp.h"

#ifndef INTERFAZ_DEL_SISTEMA_IMP_CPP
#define INTERFAZ_DEL_SISTEMA_IMP_CPP

// Inicializaci�n de los atributos
InterfazDelSistemaImp::InterfazDelSistemaImp(unsigned int CANT_SENSORES, unsigned int MAX_ESTADOS)
{
	//EGuren!

	//VAMOO EL GIT!!
	//NO IMPLEMENTADO	
}

// Eliminaci�n de los objetos creados con "new"
InterfazDelSistemaImp::~InterfazDelSistemaImp()
{
	//NO IMPLEMENTADO	
}

TipoRetorno InterfazDelSistemaImp::AgregarLuz(unsigned int nroLuz, char* nombre)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::AgregarArtefacto(unsigned int nroArt, char* nombre)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::CambiarEstadoLuz(unsigned int nroLuz, unsigned int porcentaje)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::CambiarEstadoArtefacto(unsigned int nroArt, EstadoArtefacto nuevoEstado)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::CambiarEstadoAlarma(EstadoAlarma nuevoEstado)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::ImprimirEstadoCasa() const
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::CrearCondicion(unsigned int nroCondicion, void (*seCumpleCondicion)(int), void (*seDejaDeCumplirCondicion)(int))
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::AgregarSensorACondicion(unsigned int nroCondicion, unsigned int nroSensor, EstadoSensor estado)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::CambiarEstadoSensor(unsigned int nroSensor, EstadoSensor estado)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::InicioEscena(unsigned int nroEscena, char* nombre)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::FinEscena()
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::EjecutarEscena(unsigned int nroEscena)
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::ImprimirEscenas() const
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::ImprimirEscena(unsigned int nroEscena) const
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::ImprimirEscenasRaras() const
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::GuardarEstadoActual()
{
	return NO_IMPLEMENTADA;
}

TipoRetorno InterfazDelSistemaImp::VolverAlEstadoAnterior()
{
	return NO_IMPLEMENTADA;
}

#endif