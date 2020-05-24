#ifndef __GUI_frame_encode_A__
#define __GUI_frame_encode_A__

/**
@file
Subclass of frame_encode_A, which is generated by wxFormBuilder.
*/

#include "GUI.h"

//// end generated include
#include "DrawManager.h"
#include "LoadSaveManager.h"
#include "Stegano.h"

/** Implementing frame_encode_A */
class GUI_frame_encode_A : public frame_encode_A
{
	protected:
		// Handlers for frame_encode_A events.
		void frame_encode_A_OnUpdateUI( wxUpdateUIEvent& event );
		void button_load_input_OnButtonClick( wxCommandEvent& event );
		void button_encode_OnButtonClick( wxCommandEvent& event );
		void button_save_output_OnButtonClick( wxCommandEvent& event );
		void button_return_OnButtonClick( wxCommandEvent& event );
	public:
		/** Constructor */
		GUI_frame_encode_A( wxWindow* parent );
	//// end generated class members

		wxImage inputImage;	// obrazek wczytywany (do zakodowania)
		wxImage outputImage;	// obrazek zakodowany
		// metody obslugujace gauge - zakres i wartosc
		void setGaugeRange(int);
		void setGaugeValue(int);
};

#endif // __GUI_frame_encode_A__