/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSNumber, NSString, SASportsSeason;

@interface SASportsLeague : AceObject <SAAceSerializable> {
}

@property(copy) NSString * diplayedText;
@property(copy) NSNumber * displayTeamLocationOverName;
@property(copy) NSString * displayedText;
@property(copy) NSString * identifier;
@property(retain) SASportsSeason * season;
@property(copy) NSString * sport;

+ (id)leagueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)league;

- (void)setSport:(id)arg1;
- (id)sport;
- (void)setSeason:(id)arg1;
- (id)season;
- (void)setDisplayedText:(id)arg1;
- (id)displayedText;
- (void)setDisplayTeamLocationOverName:(id)arg1;
- (id)displayTeamLocationOverName;
- (void)setDiplayedText:(id)arg1;
- (id)diplayedText;
- (id)encodedClassName;
- (void)setIdentifier:(id)arg1;
- (id)identifier;
- (id)groupIdentifier;

@end
