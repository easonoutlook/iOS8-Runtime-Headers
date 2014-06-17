/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADQuadBezierToPathElement : OADPathElement  {
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } y; 
    } mControlPoint;
    struct OADAdjustPoint { 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } x; 
        struct OADAdjustCoord { 
            BOOL isFormulaResult; 
            int value; 
        } y; 
    } mToPoint;
}


- (id)initWithControlPoint:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })arg1 toPoint:(struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })arg2;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })controlPoint;
- (struct OADAdjustPoint { struct OADAdjustCoord { BOOL x_1_1_1; int x_1_1_2; } x1; struct OADAdjustCoord { BOOL x_2_1_1; int x_2_1_2; } x2; })toPoint;
- (id).cxx_construct;

@end
