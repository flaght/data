# Generated by the protocol buffer compiler.  DO NOT EDIT!
# source: depth_market.proto

import sys
_b=sys.version_info[0]<3 and (lambda x:x) or (lambda x:x.encode('latin1'))
from google.protobuf import descriptor as _descriptor
from google.protobuf import message as _message
from google.protobuf import reflection as _reflection
from google.protobuf import symbol_database as _symbol_database
from google.protobuf import descriptor_pb2
# @@protoc_insertion_point(imports)

_sym_db = _symbol_database.Default()




DESCRIPTOR = _descriptor.FileDescriptor(
  name='depth_market.proto',
  package='simnow_logic',
  syntax='proto2',
  serialized_pb=_b('\n\x12\x64\x65pth_market.proto\x12\x0csimnow_logic\"\xb8\x0c\n\x0b\x44\x65pthMarket\x12\x13\n\x0btrading_day\x18\x01 \x02(\x0c\x12\x0e\n\x06symbol\x18\x02 \x02(\x0c\x12\x13\n\x0b\x65xchange_id\x18\x03 \x02(\x0c\x12\x17\n\x0f\x65xchange_symbol\x18\x04 \x02(\x0c\x12\x12\n\nlast_price\x18\x05 \x02(\x01\x12\x1c\n\x14pre_settlement_price\x18\x06 \x02(\x01\x12\x17\n\x0fpre_close_price\x18\x07 \x02(\x01\x12\x19\n\x11pre_open_interest\x18\x08 \x02(\x01\x12\x12\n\nopen_price\x18\t \x02(\x01\x12\x15\n\rhighest_price\x18\n \x02(\x01\x12\x14\n\x0clowest_price\x18\x0b \x02(\x01\x12\x0e\n\x06volume\x18\x0c \x02(\x01\x12\x10\n\x08turnover\x18\r \x02(\x01\x12\x15\n\ropen_interest\x18\x0e \x02(\x01\x12\x13\n\x0b\x63lose_price\x18\x0f \x02(\x01\x12\x18\n\x10settlement_price\x18\x10 \x02(\x01\x12\x19\n\x11upper_limit_price\x18\x11 \x02(\x01\x12\x19\n\x11lower_limit_price\x18\x12 \x02(\x01\x12\x11\n\tpre_delta\x18\x13 \x02(\x01\x12\x12\n\ncurr_delta\x18\x14 \x02(\x01\x12\x13\n\x0bupdate_time\x18\x15 \x02(\x0c\x12\x17\n\x0fupdate_millisec\x18\x16 \x02(\x05\x12\x15\n\raverage_price\x18\x17 \x02(\x01\x12\x14\n\x0c\x63urrent_time\x18\x18 \x02(\x03\x12\x12\n\naction_day\x18\x19 \x02(\x0c\x12\x17\n\x0finstrument_name\x18\x1a \x02(\x0c\x12\x12\n\nproduct_id\x18\x1b \x02(\x0c\x12\x15\n\rbid_price_one\x18\x1c \x02(\x01\x12\x16\n\x0e\x62id_volume_one\x18\x1d \x02(\x05\x12\x15\n\rask_price_one\x18\x1e \x02(\x01\x12\x16\n\x0e\x61sk_volume_one\x18\x1f \x02(\x05\x12\x15\n\rbid_price_two\x18  \x02(\x01\x12\x16\n\x0e\x62id_volume_two\x18! \x02(\x05\x12\x15\n\rask_price_two\x18\" \x02(\x01\x12\x16\n\x0e\x61sk_volume_two\x18# \x02(\x05\x12\x17\n\x0f\x62id_price_three\x18$ \x02(\x01\x12\x18\n\x10\x62id_volume_three\x18% \x02(\x05\x12\x17\n\x0f\x61sk_price_three\x18& \x02(\x01\x12\x18\n\x10\x61sk_volume_three\x18\' \x02(\x05\x12\x16\n\x0e\x62id_price_four\x18( \x02(\x01\x12\x17\n\x0f\x62id_volume_four\x18) \x02(\x05\x12\x16\n\x0e\x61sk_price_four\x18* \x02(\x01\x12\x17\n\x0f\x61sk_volume_four\x18+ \x02(\x05\x12\x16\n\x0e\x62id_price_five\x18, \x02(\x01\x12\x17\n\x0f\x62id_volume_five\x18- \x02(\x05\x12\x16\n\x0e\x61sk_price_five\x18. \x02(\x01\x12\x17\n\x0f\x61sk_volume_five\x18/ \x02(\x05\x12\x15\n\rbid_price_six\x18\x30 \x02(\x01\x12\x16\n\x0e\x62id_volume_six\x18\x31 \x02(\x05\x12\x15\n\rask_price_six\x18\x32 \x02(\x01\x12\x16\n\x0e\x61sk_volume_six\x18\x33 \x02(\x05\x12\x17\n\x0f\x62id_price_seven\x18\x34 \x02(\x01\x12\x18\n\x10\x62id_volume_seven\x18\x35 \x02(\x05\x12\x17\n\x0f\x61sk_price_seven\x18\x36 \x02(\x01\x12\x18\n\x10\x61sk_volume_seven\x18\x37 \x02(\x05\x12\x17\n\x0f\x62id_price_eight\x18\x38 \x02(\x01\x12\x18\n\x10\x62id_volume_eight\x18\x39 \x02(\x05\x12\x17\n\x0f\x61sk_price_eight\x18: \x02(\x01\x12\x18\n\x10\x61sk_volume_eight\x18; \x02(\x05\x12\x16\n\x0e\x62id_price_nine\x18< \x02(\x01\x12\x17\n\x0f\x62id_volume_nine\x18= \x02(\x05\x12\x16\n\x0e\x61sk_price_nine\x18> \x02(\x01\x12\x17\n\x0f\x61sk_volume_nine\x18? \x02(\x05\x12\x15\n\rbid_price_ten\x18@ \x02(\x01\x12\x16\n\x0e\x62id_volume_ten\x18\x41 \x02(\x05\x12\x15\n\rask_price_ten\x18\x42 \x02(\x01\x12\x16\n\x0e\x61sk_volume_ten\x18\x43 \x02(\x05')
)




_DEPTHMARKET = _descriptor.Descriptor(
  name='DepthMarket',
  full_name='simnow_logic.DepthMarket',
  filename=None,
  file=DESCRIPTOR,
  containing_type=None,
  fields=[
    _descriptor.FieldDescriptor(
      name='trading_day', full_name='simnow_logic.DepthMarket.trading_day', index=0,
      number=1, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='symbol', full_name='simnow_logic.DepthMarket.symbol', index=1,
      number=2, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exchange_id', full_name='simnow_logic.DepthMarket.exchange_id', index=2,
      number=3, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='exchange_symbol', full_name='simnow_logic.DepthMarket.exchange_symbol', index=3,
      number=4, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='last_price', full_name='simnow_logic.DepthMarket.last_price', index=4,
      number=5, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pre_settlement_price', full_name='simnow_logic.DepthMarket.pre_settlement_price', index=5,
      number=6, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pre_close_price', full_name='simnow_logic.DepthMarket.pre_close_price', index=6,
      number=7, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pre_open_interest', full_name='simnow_logic.DepthMarket.pre_open_interest', index=7,
      number=8, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='open_price', full_name='simnow_logic.DepthMarket.open_price', index=8,
      number=9, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='highest_price', full_name='simnow_logic.DepthMarket.highest_price', index=9,
      number=10, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='lowest_price', full_name='simnow_logic.DepthMarket.lowest_price', index=10,
      number=11, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='volume', full_name='simnow_logic.DepthMarket.volume', index=11,
      number=12, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='turnover', full_name='simnow_logic.DepthMarket.turnover', index=12,
      number=13, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='open_interest', full_name='simnow_logic.DepthMarket.open_interest', index=13,
      number=14, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='close_price', full_name='simnow_logic.DepthMarket.close_price', index=14,
      number=15, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='settlement_price', full_name='simnow_logic.DepthMarket.settlement_price', index=15,
      number=16, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='upper_limit_price', full_name='simnow_logic.DepthMarket.upper_limit_price', index=16,
      number=17, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='lower_limit_price', full_name='simnow_logic.DepthMarket.lower_limit_price', index=17,
      number=18, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='pre_delta', full_name='simnow_logic.DepthMarket.pre_delta', index=18,
      number=19, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='curr_delta', full_name='simnow_logic.DepthMarket.curr_delta', index=19,
      number=20, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='update_time', full_name='simnow_logic.DepthMarket.update_time', index=20,
      number=21, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='update_millisec', full_name='simnow_logic.DepthMarket.update_millisec', index=21,
      number=22, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='average_price', full_name='simnow_logic.DepthMarket.average_price', index=22,
      number=23, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='current_time', full_name='simnow_logic.DepthMarket.current_time', index=23,
      number=24, type=3, cpp_type=2, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='action_day', full_name='simnow_logic.DepthMarket.action_day', index=24,
      number=25, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='instrument_name', full_name='simnow_logic.DepthMarket.instrument_name', index=25,
      number=26, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='product_id', full_name='simnow_logic.DepthMarket.product_id', index=26,
      number=27, type=12, cpp_type=9, label=2,
      has_default_value=False, default_value=_b(""),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_price_one', full_name='simnow_logic.DepthMarket.bid_price_one', index=27,
      number=28, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_volume_one', full_name='simnow_logic.DepthMarket.bid_volume_one', index=28,
      number=29, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_price_one', full_name='simnow_logic.DepthMarket.ask_price_one', index=29,
      number=30, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_volume_one', full_name='simnow_logic.DepthMarket.ask_volume_one', index=30,
      number=31, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_price_two', full_name='simnow_logic.DepthMarket.bid_price_two', index=31,
      number=32, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_volume_two', full_name='simnow_logic.DepthMarket.bid_volume_two', index=32,
      number=33, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_price_two', full_name='simnow_logic.DepthMarket.ask_price_two', index=33,
      number=34, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_volume_two', full_name='simnow_logic.DepthMarket.ask_volume_two', index=34,
      number=35, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_price_three', full_name='simnow_logic.DepthMarket.bid_price_three', index=35,
      number=36, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_volume_three', full_name='simnow_logic.DepthMarket.bid_volume_three', index=36,
      number=37, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_price_three', full_name='simnow_logic.DepthMarket.ask_price_three', index=37,
      number=38, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_volume_three', full_name='simnow_logic.DepthMarket.ask_volume_three', index=38,
      number=39, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_price_four', full_name='simnow_logic.DepthMarket.bid_price_four', index=39,
      number=40, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_volume_four', full_name='simnow_logic.DepthMarket.bid_volume_four', index=40,
      number=41, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_price_four', full_name='simnow_logic.DepthMarket.ask_price_four', index=41,
      number=42, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_volume_four', full_name='simnow_logic.DepthMarket.ask_volume_four', index=42,
      number=43, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_price_five', full_name='simnow_logic.DepthMarket.bid_price_five', index=43,
      number=44, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_volume_five', full_name='simnow_logic.DepthMarket.bid_volume_five', index=44,
      number=45, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_price_five', full_name='simnow_logic.DepthMarket.ask_price_five', index=45,
      number=46, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_volume_five', full_name='simnow_logic.DepthMarket.ask_volume_five', index=46,
      number=47, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_price_six', full_name='simnow_logic.DepthMarket.bid_price_six', index=47,
      number=48, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_volume_six', full_name='simnow_logic.DepthMarket.bid_volume_six', index=48,
      number=49, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_price_six', full_name='simnow_logic.DepthMarket.ask_price_six', index=49,
      number=50, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_volume_six', full_name='simnow_logic.DepthMarket.ask_volume_six', index=50,
      number=51, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_price_seven', full_name='simnow_logic.DepthMarket.bid_price_seven', index=51,
      number=52, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_volume_seven', full_name='simnow_logic.DepthMarket.bid_volume_seven', index=52,
      number=53, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_price_seven', full_name='simnow_logic.DepthMarket.ask_price_seven', index=53,
      number=54, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_volume_seven', full_name='simnow_logic.DepthMarket.ask_volume_seven', index=54,
      number=55, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_price_eight', full_name='simnow_logic.DepthMarket.bid_price_eight', index=55,
      number=56, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_volume_eight', full_name='simnow_logic.DepthMarket.bid_volume_eight', index=56,
      number=57, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_price_eight', full_name='simnow_logic.DepthMarket.ask_price_eight', index=57,
      number=58, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_volume_eight', full_name='simnow_logic.DepthMarket.ask_volume_eight', index=58,
      number=59, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_price_nine', full_name='simnow_logic.DepthMarket.bid_price_nine', index=59,
      number=60, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_volume_nine', full_name='simnow_logic.DepthMarket.bid_volume_nine', index=60,
      number=61, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_price_nine', full_name='simnow_logic.DepthMarket.ask_price_nine', index=61,
      number=62, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_volume_nine', full_name='simnow_logic.DepthMarket.ask_volume_nine', index=62,
      number=63, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_price_ten', full_name='simnow_logic.DepthMarket.bid_price_ten', index=63,
      number=64, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='bid_volume_ten', full_name='simnow_logic.DepthMarket.bid_volume_ten', index=64,
      number=65, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_price_ten', full_name='simnow_logic.DepthMarket.ask_price_ten', index=65,
      number=66, type=1, cpp_type=5, label=2,
      has_default_value=False, default_value=float(0),
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
    _descriptor.FieldDescriptor(
      name='ask_volume_ten', full_name='simnow_logic.DepthMarket.ask_volume_ten', index=66,
      number=67, type=5, cpp_type=1, label=2,
      has_default_value=False, default_value=0,
      message_type=None, enum_type=None, containing_type=None,
      is_extension=False, extension_scope=None,
      options=None),
  ],
  extensions=[
  ],
  nested_types=[],
  enum_types=[
  ],
  options=None,
  is_extendable=False,
  syntax='proto2',
  extension_ranges=[],
  oneofs=[
  ],
  serialized_start=37,
  serialized_end=1629,
)

DESCRIPTOR.message_types_by_name['DepthMarket'] = _DEPTHMARKET
_sym_db.RegisterFileDescriptor(DESCRIPTOR)

DepthMarket = _reflection.GeneratedProtocolMessageType('DepthMarket', (_message.Message,), dict(
  DESCRIPTOR = _DEPTHMARKET,
  __module__ = 'depth_market_pb2'
  # @@protoc_insertion_point(class_scope:simnow_logic.DepthMarket)
  ))
_sym_db.RegisterMessage(DepthMarket)


# @@protoc_insertion_point(module_scope)
