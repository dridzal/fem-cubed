# (𝔽𝔼𝕄)³
### 𝔽inite 𝔼lement 𝕄odeling 𝔽or 𝔼lectro𝕄agnetics 𝔽or 𝔼xascale 𝕄achines

The objective of the (FEM)³ project is to enable __scalable simulation and
optimization__ of electromagnetic phenomena modeled by Maxwell's equations.

The code is based on a variety of packages from the [Trilinos](https://trilinos.org) project and relies heavily on the [Panzer](https://trilinos.org/packages/panzer) multiphysics toolkit.

---

### Key goals

* __High-fidelity simulations:__ High-order compatible discretizations of Maxwell's equations.

  * Through Intrepid2 and Panzer.

* __Scalability and portability:__ Runs efficiently on laptops, workstations and high-performance computing platforms.

  * Through Kokkos, Tpetra, Ifpack2, MueLu and Belos.

* __Adjoint-based optimization:__ Efficient solution of topology optimization, shape optimization and inverse problems.

  * Through ROL (Rapid Optimization Library).
