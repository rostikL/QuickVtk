#include "quickVtkPNGReader.hpp"

namespace quick {

    namespace Vtk {

        Qml::Register::Class<PNGReader> PNGReader::Register;

        PNGReader::PNGReader() : ImageReader2(this) {
            this->m_vtkPNGReader = vtkSmartPointer<vtkPNGReader>::New();
            this->setVtkImageReader2(this->m_vtkPNGReader);
        }
    }
}