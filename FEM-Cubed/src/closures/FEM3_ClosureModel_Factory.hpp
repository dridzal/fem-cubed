#ifndef __FEM3_ClosureModelFactory_hpp__
#define __FEM3_ClosureModelFactory_hpp__

#include "Panzer_ClosureModel_Factory.hpp"

namespace panzer {
  class InputEquationSet;
}

namespace FEM3 {

template<typename EvalT>
class ModelFactory : public panzer::ClosureModelFactory<EvalT> {

public:

   Teuchos::RCP< std::vector< Teuchos::RCP<PHX::Evaluator<panzer::Traits> > > >
   buildClosureModels(const std::string& model_id,
                      const Teuchos::ParameterList& models,
		      const panzer::FieldLayoutLibrary& fl,
		      const Teuchos::RCP<panzer::IntegrationRule>& ir,
                      const Teuchos::ParameterList& default_params,
                      const Teuchos::ParameterList& user_data,
		      const Teuchos::RCP<panzer::GlobalData>& global_data,
                      PHX::FieldManager<panzer::Traits>& fm) const;

};

}

#include "FEM3_ClosureModel_Factory_impl.hpp"

#endif