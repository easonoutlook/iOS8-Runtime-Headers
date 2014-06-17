/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@class NSString, NSMutableArray;

@interface CalLogConfiguration : NSObject  {
    NSString *_name;
    NSMutableArray *_nodes;
}

@property(retain) NSString * name;
@property(retain) NSMutableArray * nodes;


- (id)nodes;
- (void)setNodes:(id)arg1;
- (id)initWithSimpleDefinition:(id)arg1;
- (id)initWithDetailedDefinition:(id)arg1;
- (id)parseFilterDefinition:(id)arg1;
- (id)parseWriterDefinition:(id)arg1;
- (id)parseNodeDefinition:(id)arg1;
- (void)parseConfigurationDefinition:(id)arg1;
- (void).cxx_destruct;
- (id)name;
- (void)setName:(id)arg1;
- (id)description;
- (id)init;

@end
