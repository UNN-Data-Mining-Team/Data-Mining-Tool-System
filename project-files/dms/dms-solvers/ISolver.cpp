#include "ISolver.h"

namespace dms::solvers
{
	ISolver::ISolver(ISolverDescription^ desc)
	{
		inputsCount = desc->GetInputsCount();
		outputsCount = desc->GetOutputsCount();

		_attr = new std::vector<std::string>();
		_opers = new std::map<std::string, void*>();
	}

	__int64 ISolver::GetInputsCount()
	{
		return inputsCount;
	}

	__int64 ISolver::GetOutputsCount()
	{
		return outputsCount;
	}

	void* ISolver::getAttributes()
	{
		return _attr;
	}

	void* ISolver::getOperations()
	{
		return _opers;
	}

	ISolver::~ISolver()
	{
		delete _attr;
		delete _opers;
	}
}