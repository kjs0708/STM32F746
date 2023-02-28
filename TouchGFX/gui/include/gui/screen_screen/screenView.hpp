#ifndef SCREENVIEW_HPP
#define SCREENVIEW_HPP

#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <gui/screen_screen/screenPresenter.hpp>

#include <touchgfx/Utils.hpp>
#include "main.h"

class screenView : public screenViewBase
{
public:
    screenView();
    virtual ~screenView() {}
    virtual void setupScreen();
    virtual void tearDownScreen();

    virtual void LEDOnOff()
    {
    	HAL_GPIO_TogglePin(ARD_D13_GPIO_Port, ARD_D13_Pin);
    }
protected:
};

#endif // SCREENVIEW_HPP
