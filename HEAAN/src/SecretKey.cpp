/*
 * Copyright (c) by CryptoLab inc.
 * This program is licensed under a
 * Creative Commons Attribution-NonCommercial 3.0 Unported License.
 * You should have received a copy of the license along with this
 * work.  If not, see <http://creativecommons.org/licenses/by-nc/3.0/>.
 */
#include "SecretKey.h"

namespace heaan {

SecretKey::SecretKey(Ring& ring) { ring.sampleHWT(sx); }

}  // namespace heaan
