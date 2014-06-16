vtk_module(vtkRenderingLIC
  GROUPS
    Rendering
  DEPENDS
    vtkIOXML
    vtkIOLegacy
    vtkImagingSources
    vtkRendering${VTK_RENDERING_BACKEND}
  PRIVATE_DEPENDS
    vtksys
  TEST_DEPENDS
    vtkTestingCore
    vtkTestingRendering
    vtkInteractionStyle
  )
