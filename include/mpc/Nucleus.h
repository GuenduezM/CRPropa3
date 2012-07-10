#ifndef NUCLEUS_H_
#define NUCLEUS_H_

#include <stdexcept>

namespace mpc {

/** This implements the 2006 Monte Carlo nuclear code scheme.
 * Ion numbers are +/- 10LZZZAAAI.
 * AAA is A - total baryon number
 * ZZZ is Z - total charge
 * L is the total number of strange quarks.
 * I is the isomer number, with I=0 corresponding to the ground state.
 */
int getNucleusId(int a, int z);

/** Return the nucleus mass by lookup from a table.
 *  The masses are the atomic masses from the NIST database (http://www.nist.gov/pml/data/comp.cfm) minus electron masses, neglecting electron binding energies.
 *  Unmeasured atomic masses are taken to be A * amu minus electron masses.
 *  The data table is generated by mpc/data/NuclearMass/createNuclearMassTable.
 */
double getNucleusMass(int id);

int getChargeNumberFromNucleusId(int id);
int getMassNumberFromNucleusId(int id);

} // namespace mpc

#endif /* NUCLEUS_H_ */
