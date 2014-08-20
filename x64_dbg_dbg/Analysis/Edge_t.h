#pragma once
#include "../_global.h"
#include "Meta.h"
#include <set>

namespace fa
{
	class Node_t;

	// directed edge
	class Edge_t 
	{
	public:
		Node_t* start;   // where does the EIP change happens?
		Node_t* end;     // whats the new target address?

		bool askForRemove;

		EdgeType type;   // what kind of instruction (call,jmp, ret, jnz, ...) causes this?

		Edge_t(Node_t* start, Node_t* end, EdgeType btype);
		~Edge_t();

		bool operator==(const Edge_t & rhs) const;
		bool operator<(const Edge_t & rhs) const;
		bool shouldBeRemoved() const;
		void remove();

	};

};