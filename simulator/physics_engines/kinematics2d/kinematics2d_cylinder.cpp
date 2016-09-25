/* -*- Mode: C++ -*-
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

/**
 * @file <argos2/simulator/physics_engines/kinematics2d_cylinder.cpp>
 *
 * @author Vito Trianni - <vito.trianni@istc.cnr.it>
 */

#include "kinematics2d_cylinder.h"
#include <argos2/simulator/simulator.h>
#include <argos2/simulator/space/space.h>
#include <argos2/simulator/physics_engines/kinematics2d/kinematics2d_engine.h>

namespace argos {

   /****************************************/
   /****************************************/

   CKinematics2DCylinder::CKinematics2DCylinder(CKinematics2DEngine& c_engine, CCylinderEntity& c_cylinder) :
      CKinematics2DCollisionCircle(c_engine, c_cylinder.GetEmbodiedEntity(), c_cylinder.GetRadius()),
      m_cCylinderEntity(c_cylinder) {
     
      m_bEnabled = false;

      if( c_cylinder.GetEmbodiedEntity().IsMovable() ) {
	 THROW_ARGOSEXCEPTION("[ERROR] Kinematics2D engine cannot handle movable cylinders");
      }
   }
}
