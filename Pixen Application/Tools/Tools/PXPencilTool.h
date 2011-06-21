//  PXPencilTool.h
//  Pixen

// Copyright (c) 2003,2004,2005 Open Sword Group

// Permission is hereby granted, free of charge, to any person obtaining a copy

// of this software and associated documentation files (the "Software"),
// to deal in the Software without restriction, including without limitation 
// the rights  to use,copy, modify, merge, publish, distribute, sublicense, 
// and/or sell copies of the Software, and to permit persons to whom
//  the Software is  furnished to do so, subject to the following conditions:

// The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.

// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. 
// IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
// BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF
// CONTRACT, TORT OR OTHERWISE, ARISING FROM,  OUT OF OR IN CONNECTION WITH
// THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
//

//  Created by Joe Osborn on Tue Sep 30 2003.
//  Copyright (c) 2003 Open Sword Group. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "PXTool.h"
@class PXLayer, PXCanvas;

@interface PXPencilTool : PXTool 
{
  @private
	BOOL isDragging;
	BOOL shiftDown;
	NSRect changedRect, lastBezierBounds;
	NSPoint movingOrigin;
  @public
	BOOL shouldUseBezierDrawing;
}

- (BOOL)shouldUseBezierDrawing;

- (void)mouseDownAt:(NSPoint)aPoint
fromCanvasController:(PXCanvasController *) controller;

- (void)mouseDraggedFrom:(NSPoint)origin
					  to:(NSPoint)destination
    fromCanvasController:(PXCanvasController *)controller;

- (void)mouseUpAt:(NSPoint)point
fromCanvasController:(PXCanvasController *) controller;

- (void)drawWithOldColor:(NSColor *)oldColor 
				newColor:(NSColor *)newColor
				 atPoint:(NSPoint)aPoint
				 inLayer:(PXLayer *)aLayer
				ofCanvas:(PXCanvas *) aCanvas;

- (void)drawPixelAtPoint:(NSPoint)aPoint
				inCanvas:(PXCanvas *)aCanvas;
				
- (void)drawLineFrom:(NSPoint)initialPoint
				  to:(NSPoint)finalPoint
			inCanvas:(PXCanvas *) canvas;

@end
