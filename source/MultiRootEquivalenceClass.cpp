/*
Copyright or © or Copr. CNRS

This software is a computer program whose purpose is to estimate
phylogenies and evolutionary parameters from a dataset according to
the maximum likelihood principle.

This software is governed by the CeCILL  license under French law and
abiding by the rules of distribution of free software.  You can  use, 
modify and/ or redistribute the software under the terms of the CeCILL
license as circulated by CEA, CNRS and INRIA at the following URL
"http://www.cecill.info". 

As a counterpart to the access to the source code and  rights to copy,
modify and redistribute granted by the license, users are provided only
with a limited warranty  and the software's author,  the holder of the
economic rights,  and the successive licensors  have only  limited
liability. 

In this respect, the user's attention is drawn to the risks associated
with loading,  using,  modifying and/or developing or reproducing the
software by the user in light of its specific status of free software,
that may mean  that it is complicated to manipulate,  and  that  also
therefore means  that it is reserved for developers  and  experienced
professionals having in-depth computer knowledge. Users are therefore
encouraged to load and test the software's suitability as regards their
requirements in conditions enabling the security of their systems and/or 
data to be ensured and,  more generally, to use and operate it in the 
same conditions as regards security. 

The fact that you are presently reading this means that you have had
knowledge of the CeCILL license and that you accept its terms.
*/
/*

This file contains a class for adjacency classes

Created the: 17-04-2016
by: Wandrille Duchemin

Last modified the: 13-07-2016
by: Wandrille Duchemin

*/

#include "MultiRootEquivalenceClass.h"

/*Constructor from an equivalence class that just copies the list of adjacencies and its ancestors*/
MultiRootEquivalenceClass::MultiRootEquivalenceClass( EquivalenceClass *EC) : EquivalenceClass(0, 0)
{

	Gfamily1 = EC->getGfamily1();
	Gfamily2 = EC->getGfamily2();

	sens1 = EC->getSens1();
	sens2 = EC->getSens2();
	
	ancestors = EC->getAncestors();


	vector <pair <string, string> > adjs = EC->getAdjs();
	for(unsigned i=0; i < adjs.size(); i++)
	{
		Lnames1.push_back(adjs[i].first);
		Lnames2.push_back(adjs[i].second);
	}

}

/*
vector<EquivalenceClass *> MultiRootEquivalenceClass::refineEqClass(ReconciledTree * Rtree1, ReconciledTree * Rtree2, bool forceLTrefining, bool verbose)
{ 
	vector<EquivalenceClass *> refined;
	refined.push_back(this);
	return refined;
}

vector<EquivalenceClass *> MultiRootEquivalenceClass::refineEqClassWhole(ReconciledTree * Rtree1, ReconciledTree * Rtree2, bool verbose)
{
	vector<EquivalenceClass *> refined;
	refined.push_back(this);
	return refined;
}
*/
