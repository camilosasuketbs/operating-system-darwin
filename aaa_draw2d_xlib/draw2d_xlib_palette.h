#pragma once


namespace draw2d_xlib
{

   class CLASS_DECL_DRAW2D_XLIB palette :
      virtual public ::draw2d_xlib::object,
      virtual public ::draw2d::palette
   {
   public:

      palette(::particle * pparticle);
      virtual ~palette();


//      bool CreatePalette(LPLOGPALETTE lpLogPalette);
//      bool CreateHalftonePalette(::image::image * pimage);

      // Attributes
      /*      operator HPALETTE() const;
            int GetEntryCount();
            unsigned int GetPaletteEntries(unsigned int nStartIndex, unsigned int nNumEntries,
                  LPPALETTEENTRY lpPaletteColors) const;
            unsigned int SetPaletteEntries(unsigned int nStartIndex, unsigned int nNumEntries,
                  LPPALETTEENTRY lpPaletteColors);

         // Operations
            void AnimatePalette(unsigned int nStartIndex, unsigned int nNumEntries,
                  LPPALETTEENTRY lpPaletteColors);
            unsigned int GetNearestPaletteIndex(color32_t crColor) const;
      //      bool ResizePalette(unsigned int nNumEntries);*/

      // Implementation
   };


} // namespace draw2d_xlib

