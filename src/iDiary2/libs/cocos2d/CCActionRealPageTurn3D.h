/*
 * cocos2d for iPhone: http://www.cocos2d-iphone.org
 *
 * Copyright (c) 2009 Sindesso Pty Ltd http://www.sindesso.com/
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */


#import "CCActionGrid3D.h"

/**
 * This action simulates a page turn from the bottom right hand corner of the screen
 * It's not much use by itself but is used by the PageTurnTransition.
 *
 * Based on an original paper by L Hong et al.
 * http://www.parc.com/publication/1638/turning-pages-of-3d-electronic-books.html
 * 
 * @since v0.8.2
 */
@interface CCRealPageTurn3D : CCGrid3DAction
{
    BOOL beneath;
    float curlStrength;
    BOOL curlForward;
}

@property (assign,nonatomic) BOOL beneath;
@property (assign,nonatomic) float curlStrength;
@property (assign,nonatomic) BOOL curlForward;

+(id) actionWithSize:(ccGridSize)size duration:(ccTime)d curlStrength:(float)cs curlForward:(BOOL)cf beneath:(BOOL)pIsBeneath;

@end
