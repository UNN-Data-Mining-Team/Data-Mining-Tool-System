#pragma once
#include <list>
#include <map>
#include "GeneticAlgo.h"
using namespace System;
using namespace dms::solvers;
using namespace dms::solvers::neural_nets;
using namespace geneticAlgo;


namespace dms::learningAlgoritms
{
	public ref class LearningAlgoritms
	{
	private:
		array<float>^ params;
		System::String^ usedAlgo;
		array<System::String^>^ TeacherTypesList;
		array<System::String^>^ ParamsNames;
		float startGenetic(INeuralNetwork^ solver, array<array<float>^>^ train_x, array<float>^ train_y);
	public:
		~LearningAlgoritms();
		LearningAlgoritms();
		array<System::String^>^ getTeacherTypesList();
		array<float>^ getParams();
		array<System::String^>^ getParamsNames();
		float startLearn(ISolver^ solver, array<array<float>^>^ train_x, array<float>^ train_y);
	};
}
