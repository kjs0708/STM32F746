/*********************************************************************************/
/********** THIS FILE IS GENERATED BY TOUCHGFX DESIGNER, DO NOT MODIFY ***********/
/*********************************************************************************/
#include <gui_generated/screen_screen/screenViewBase.hpp>
#include <touchgfx/Color.hpp>
#include <texts/TextKeysAndLanguages.hpp>
#include <images/BitmapDatabase.hpp>

screenViewBase::screenViewBase() :
    buttonCallback(this, &screenViewBase::buttonCallbackHandler)
{
    __background.setPosition(0, 0, 480, 272);
    __background.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    add(__background);

    box1.setPosition(0, 0, 480, 272);
    box1.setColor(touchgfx::Color::getColorFromRGB(255, 255, 255));
    add(box1);

    textArea2.setPosition(186, 234, 256, 30);
    textArea2.setColor(touchgfx::Color::getColorFromRGB(0, 0, 255));
    textArea2.setLinespacing(0);
    textArea2.setTypedText(touchgfx::TypedText(T___SINGLEUSE_MOBP));
    add(textArea2);

    textArea2_1.setPosition(184, 204, 256, 30);
    textArea2_1.setColor(touchgfx::Color::getColorFromRGB(0, 0, 0));
    textArea2_1.setLinespacing(0);
    textArea2_1.setTypedText(touchgfx::TypedText(T___SINGLEUSE_8LA4));
    add(textArea2_1);

    image2.setXY(31, 136);
    image2.setBitmap(touchgfx::Bitmap(BITMAP_KJS0708_ID));
    add(image2);

    buttonWithLabel1.setXY(55, 18);
    buttonWithLabel1.setBitmaps(touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_LARGE_ROUND_INACTIVE_ID), touchgfx::Bitmap(BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_LARGE_ROUND_INACTIVE_ID));
    buttonWithLabel1.setLabelText(touchgfx::TypedText(T___SINGLEUSE_G12C));
    buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFromRGB(21, 11, 212));
    buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(217, 33, 33));
    buttonWithLabel1.setAction(buttonCallback);
    add(buttonWithLabel1);

    buttonLEDOnOff.setXY(14, 72);
    buttonLEDOnOff.setBitmaps(touchgfx::Bitmap(BITMAP_LED_OFF_ID), touchgfx::Bitmap(BITMAP_LED_ON_ID));
    buttonLEDOnOff.setAction(buttonCallback);
    add(buttonLEDOnOff);

    animatedImage.setXY(192, 68);
    animatedImage.setBitmaps(BITMAP_LOGO_240_136_ID, BITMAP_LOGO_240_136_ID);
    animatedImage.setUpdateTicksInterval(1);
    animatedImage.startAnimation(false, true, false);
    add(animatedImage);
}

screenViewBase::~screenViewBase()
{

}

void screenViewBase::setupScreen()
{

}

void screenViewBase::buttonCallbackHandler(const touchgfx::AbstractButton& src)
{
    if (&src == &buttonWithLabel1)
    {
        //Interaction1
        //When buttonWithLabel1 clicked change label colors of buttonWithLabel1
        //Set label colors on buttonWithLabel1. Released color - R:19, G:70, B:237, Pressed color - R:227, G:16, B:48
        buttonWithLabel1.setLabelColor(touchgfx::Color::getColorFromRGB(19, 70, 237));
        buttonWithLabel1.setLabelColorPressed(touchgfx::Color::getColorFromRGB(227, 16, 48));
        buttonWithLabel1.invalidate();
    }
    if (&src == &buttonLEDOnOff)
    {
        //Interaction2
        //When buttonLEDOnOff clicked call virtual function
        //Call LEDOnOff
        LEDOnOff();
    }
}