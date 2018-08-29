#ifndef FEM3_PERMITTIVITY_DECL_HPP
#define FEM3_PERMITTIVITY_DECL_HPP

#include "PanzerAdaptersSTK_config.hpp"

#include "Phalanx_config.hpp"
#include "Phalanx_Evaluator_WithBaseImpl.hpp"
#include "Phalanx_Evaluator_Derived.hpp"
#include "Phalanx_FieldManager.hpp"

#include "Panzer_FieldLibrary.hpp"

#include <string>

#include "Panzer_Evaluator_WithBaseImpl.hpp"

namespace FEM3 {
    
  using panzer::Cell;
  using panzer::Point;

  template<typename EvalT, typename Traits>
  class Permittivity : public panzer::EvaluatorWithBaseImpl<Traits>,
                       public PHX::EvaluatorDerived<EvalT, Traits>  {

  public:
    Permittivity(const std::string & name,
                 const panzer::IntegrationRule & ir,
                 const panzer::FieldLayoutLibrary & fl,
                 const double & epsilon_,
                 const std::string& DoF_);
                                                                        
    void evaluateFields(typename Traits::EvalData d);


  private:
    typedef typename EvalT::ScalarT ScalarT;

    PHX::MDField<ScalarT,Cell,Point> permittivity;
    PHX::MDField<const ScalarT,Cell,Point,Dim> coords;
    int ir_degree;
    double epsilon;
  };

}

#include "FEM3_Permittivity_impl.hpp"

#endif
