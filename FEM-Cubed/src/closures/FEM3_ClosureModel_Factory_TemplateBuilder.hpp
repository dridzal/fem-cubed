#ifndef __FEM3_ClosureModel_Factory_TemplateBuilder_hpp__
#define __FEM3_ClosureModel_Factory_TemplateBuilder_hpp__

#include <string>
#include "Sacado_mpl_apply.hpp"
#include "Teuchos_RCP.hpp"
#include "FEM3_ClosureModel_Factory.hpp"

namespace FEM3 {

class ClosureModelFactory_TemplateBuilder {
public:
    
   template <typename EvalT>
   Teuchos::RCP<panzer::ClosureModelFactoryBase> build() const 
   {
      return Teuchos::rcp( static_cast<panzer::ClosureModelFactoryBase*>(new FEM3::ModelFactory<EvalT>) );
   }
    
};
  
}

#endif 
