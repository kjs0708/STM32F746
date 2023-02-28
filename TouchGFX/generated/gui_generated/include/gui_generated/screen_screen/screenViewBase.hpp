/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#ifndef SCREENVIEWBASE_HPP
#define SCREENVIEWBASE_HPP

#include <gui/common/FrontendApplication.hpp>
#include <mvp/View.hpp>
#include <gui/screen_screen/screenPresenter.hpp>
#include <touchgfx/widgets/Box.hpp>
#include <touchgfx/widgets/TextArea.hpp>
#include <touchgfx/widgets/Image.hpp>
#include <touchgfx/widgets/ButtonWithLabel.hpp>
#include <touchgfx/widgets/ToggleButton.hpp>
#include <touchgfx/widgets/AnimatedImage.hpp>

class screenViewBase : public touchgfx::View<screenPresenter>
{
public:
    screenViewBase();
    virtual ~screenViewBase();
    virtual void setupScreen();

    /*
     * Virtual Action Handlers
     */
    virtual void LEDOnOff()
    {
        // Override and implement this function in screen
    }

protected:
    FrontendApplication& application() {
        return *static_cast<FrontendApplication*>(touchgfx::Application::getInstance());
    }

    /*
     * Member Declarations
     */
    touchgfx::Box __background;
    touchgfx::Box box1;
    touchgfx::TextArea textArea2;
    touchgfx::TextArea textArea2_1;
    touchgfx::Image image2;
    touchgfx::ButtonWithLabel buttonWithLabel1;
    touchgfx::ToggleButton buttonLEDOnOff;
    touchgfx::AnimatedImage animatedImage;

private:

    /*
     * Callback Declarations
     */
    touchgfx::Callback<screenViewBase, const touchgfx::AbstractButton&> buttonCallback;

    /*
     * Callback Handler Declarations
     */
    void buttonCallbackHandler(const touchgfx::AbstractButton& src);

};

#endif // SCREENVIEWBASE_HPP
