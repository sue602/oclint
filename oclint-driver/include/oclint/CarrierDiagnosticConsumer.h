#ifndef OCLINT_CARRIERDIAGNOSTICCONSUMER_H
#define OCLINT_CARRIERDIAGNOSTICCONSUMER_H

#include <clang/Basic/Diagnostic.h>

namespace oclint
{

class CarrierDiagnosticConsumer : public clang::DiagnosticConsumer
{
private:
    bool _isClangStaticAnalyzerCustomer;

public:
    CarrierDiagnosticConsumer(bool runClangStaticAnalyzer);
    void HandleDiagnostic(clang::DiagnosticsEngine::Level diagnosticLevel,
        const clang::Diagnostic &diagnosticInfo);
};

} // end namespace oclint

#endif
