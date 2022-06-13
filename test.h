
#ifndef TEST_H_
#define TEST_H_

#include <cstdint>

/**@brief testPointer_t is a pointer to an opaque structure holding information.
 */
typedef struct testPointer* testPointer_t;

/**@brief testEnum_t is an enumerated type. 
 */
enum testEnum_t {
  testE_0 = 0, /*!< testE_0 is 0. */
  testE_1 = 1, /*!< testE_1 is 1. */
};

/**@brief This function test the library. 
 *@param[in] e: testEnum_t e.
 *@param[in] pointer: pointer.
 *@return 0: successfully.
 */
int test(testEnum_t e, testPointer_t pointer);

#endif  // TEST_H_
