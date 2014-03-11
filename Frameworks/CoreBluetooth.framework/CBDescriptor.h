/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@class CBCharacteristic, CBPeripheral, CBUUID, NSNumber;

@interface CBDescriptor : NSObject {
    CBUUID *_UUID;
    CBCharacteristic *_characteristic;
    NSNumber *_handle;
    CBPeripheral *_peripheral;
    id _value;
}

@property(readonly) CBUUID * UUID;
@property CBCharacteristic * characteristic;
@property(readonly) NSNumber * handle;
@property(readonly) CBPeripheral * peripheral;
@property(retain) id value;

- (id)UUID;
- (id)characteristic;
- (void)dealloc;
- (id)description;
- (id)handle;
- (id)handleValueUpdated:(id)arg1;
- (id)handleValueWritten:(id)arg1;
- (id)initWithCharacteristic:(id)arg1 dictionary:(id)arg2;
- (void)invalidate;
- (id)peripheral;
- (void)setCharacteristic:(id)arg1;
- (void)setValue:(id)arg1;
- (id)value;

@end
