#ifndef _FEM3_AddFieldsToMesh_hpp_
#define _FEM3_AddFieldsToMesh_hpp_

namespace panzer_stk {
  class STK_Interface;
}
namespace Teuchos {
  class ParameterList;
}

namespace FEM3 {

  void addFieldsToMesh(panzer_stk::STK_Interface & mesh,
                       const Teuchos::ParameterList & output_list);

}

#endif
