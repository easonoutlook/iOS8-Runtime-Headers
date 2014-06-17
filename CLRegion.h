/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
 */

@class NSString;

@interface CLRegion : NSObject <NSCopying, NSSecureCoding> {
    struct { 
        BOOL identifier[512]; 
        int type; 
        boolnotifyOnEntry; 
        boolnotifyOnExit; 
        union { 
            struct { 
                BOOL proximityUUID[512]; 
                unsigned short major; 
                unsigned short minor; 
                int definitionMask; 
                boolnotifyEntryStateOnDisplay; 
            } beaconAttributes; 
            struct { 
                struct { 
                    double latitude; 
                    double longitude; 
                } center; 
                double radius; 
                double desiredAccuracy; 
            } circularAttributes; 
        } ; 
    } fRegion;
}

@property(readonly) struct { double x1; double x2; } center;
@property(readonly) double radius;
@property(copy,readonly) NSString * identifier;
@property BOOL notifyOnEntry;
@property BOOL notifyOnExit;
@property(readonly) struct { BOOL x1[512]; int x2; boolx3; boolx4; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; boolx_1_2_5; } x_5_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; } x_5_1_2; } x5; } clientRegion;

+ (BOOL)supportsSecureCoding;

- (BOOL)containsCoordinate:(struct { double x1; double x2; })arg1;
- (id)initWithIdentifier:(id)arg1;
- (struct { double x1; double x2; })center;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (double)radius;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (void)dealloc;
- (void)setNotifyOnExit:(BOOL)arg1;
- (BOOL)notifyOnExit;
- (void)setNotifyOnEntry:(BOOL)arg1;
- (BOOL)notifyOnEntry;
- (void)_encodeWithCoder:(id)arg1;
- (id)_initWithCoder:(id)arg1;
- (id)initCircularRegionWithCenter:(struct { double x1; double x2; })arg1 radius:(double)arg2 identifier:(id)arg3;
- (id)initWithClientRegion:(struct { BOOL x1[512]; int x2; boolx3; boolx4; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; boolx_1_2_5; } x_5_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; } x_5_1_2; } x5; })arg1;
- (struct { BOOL x1[512]; int x2; boolx3; boolx4; union { struct { BOOL x_1_2_1[512]; unsigned short x_1_2_2; unsigned short x_1_2_3; int x_1_2_4; boolx_1_2_5; } x_5_1_1; struct { struct { double x_1_3_1; double x_1_3_2; } x_2_2_1; double x_2_2_2; double x_2_2_3; } x_5_1_2; } x5; })clientRegion;

@end
