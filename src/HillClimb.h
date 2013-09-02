/*
 * HillClimb.h
 *
 *  Created on: Jun 24, 2013
 *      Author: goldman
 */

#ifndef HILLCLIMB_H_
#define HILLCLIMB_H_

#include <unordered_map>
#include <unordered_set>
#include "Evaluation.h"
#include "Configuration.h"
#include "Util.h"

namespace hill_climb {
using pointer=void (*)(Random & rand, vector<bool> & solution, float & fitness, Evaluator& evaluator);

void first_improvement(Random & rand, vector<bool> & solution, float & fitness,
                       Evaluator& evaluator);

void steepest_ascent(Random & rand, vector<bool> & solution, float & fitness,
                     Evaluator& evaluator);

void no_action(Random & rand, vector<bool> & solution, float & fitness,
               Evaluator& evaluator);

void binary_tournament(Random & rand, vector<bool> & solution, float & fitness,
                       Evaluator& evaluator);

void once_each(Random & rand, vector<bool> & solution, float & fitness,
               Evaluator& evaluator);

static std::unordered_map<string, pointer> lookup( {
  { "first_improvement", first_improvement },
  { "steepest_ascent", steepest_ascent },
  { "no_action", no_action },
  { "binary_tournament", binary_tournament },
  { "once_each", once_each }
});
}

#endif /* HILLCLIMB_H_ */
