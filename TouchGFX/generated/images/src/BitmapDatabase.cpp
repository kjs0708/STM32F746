// 4.21.1 0x70132fc2
// Generated by imageconverter. Please, do not edit!

#include <images/BitmapDatabase.hpp>
#include <touchgfx/Bitmap.hpp>

extern const unsigned char image_alternate_theme_images_widgets_button_regular_height_50_large_round_inactive[]; // BITMAP_ALTERNATE_THEME_IMAGES_WIDGETS_BUTTON_REGULAR_HEIGHT_50_LARGE_ROUND_INACTIVE_ID = 0, Size: 370x50 pixels
extern const unsigned char image_kjs0708[]; // BITMAP_KJS0708_ID = 1, Size: 107x119 pixels
extern const unsigned char image_led_off[]; // BITMAP_LED_OFF_ID = 2, Size: 55x60 pixels
extern const unsigned char image_led_on[]; // BITMAP_LED_ON_ID = 3, Size: 55x60 pixels
extern const unsigned char image_logo_240_136[]; // BITMAP_LOGO_240_136_ID = 4, Size: 240x136 pixels

const touchgfx::Bitmap::BitmapData bitmap_database[] = {
    { image_alternate_theme_images_widgets_button_regular_height_50_large_round_inactive, 0, 370, 50, 24, 0, 323, ((uint8_t)touchgfx::Bitmap::ARGB8888) >> 3, 3, ((uint8_t)touchgfx::Bitmap::ARGB8888) & 0x7 },
    { image_kjs0708, 0, 107, 119, 0, 0, 107, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 119, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_led_off, 0, 55, 60, 0, 0, 55, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 60, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_led_on, 0, 55, 60, 0, 0, 55, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 60, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 },
    { image_logo_240_136, 0, 240, 136, 0, 0, 240, ((uint8_t)touchgfx::Bitmap::RGB565) >> 3, 136, ((uint8_t)touchgfx::Bitmap::RGB565) & 0x7 }
};

namespace BitmapDatabase
{
const touchgfx::Bitmap::BitmapData* getInstance()
{
    return bitmap_database;
}

uint16_t getInstanceSize()
{
    return (uint16_t)(sizeof(bitmap_database) / sizeof(touchgfx::Bitmap::BitmapData));
}
} // namespace BitmapDatabase
