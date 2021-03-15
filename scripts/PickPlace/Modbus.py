from pymodbus.client.sync import ModbusTcpClient
from pymodbus.constants import Endian
from pymodbus.payload import BinaryPayloadDecoder
import rclpy
import time

"""
TO DO:
    
NOTE:
    - rotz converted to +-180 degrees
"""

class ModbusClass:
    def __init__(self, ip = '192.168.2.10'):
        self.host = ip
        self.port_modbus = 502
        self.client = ModbusTcpClient(self.host, self.port_modbus)
        self.client.connect()
        
    # Start the TM project via Modbus
    def start_program():
        print("Starting project...")
        status = self.client.write_coil(7104, True, unit=1)
        time.sleep(5)

    # Stop the TM project via Modbus
    def stop_program():
        print("Stopping project...")
        status = self.client.write_coil(7105, True, unit=1)
        time.sleep(5)

    # Decode the object obtained from reading the Modbus input registers
    def decode(self, input):
        pos_x = BinaryPayloadDecoder.fromRegisters(input.registers[0:2], Endian.Big).decode_32bit_float()
        pos_y = BinaryPayloadDecoder.fromRegisters(input.registers[2:4], Endian.Big).decode_32bit_float()
        pos_z = BinaryPayloadDecoder.fromRegisters(input.registers[4:6], Endian.Big).decode_32bit_float()
        rot_x = BinaryPayloadDecoder.fromRegisters(input.registers[6:8], Endian.Big).decode_32bit_float()
        rot_y = BinaryPayloadDecoder.fromRegisters(input.registers[8:10], Endian.Big).decode_32bit_float()
        rot_z = BinaryPayloadDecoder.fromRegisters(input.registers[10:12], Endian.Big).decode_32bit_float()

        return [pos_x, pos_y, pos_z, rot_x, rot_y, rot_z]

    # Get the 12 register addresses (8300 to 8311) which corresponds to the x, y, z, Rx, Ry and Rz 
    # of the CURRENT base (Refer to Modbus Data Table)
    def get_base(self):
        curBaseReg = self.client.read_input_registers(8300, 12)
        return self.decode(curBaseReg)
"""
    def get_pos(self):
        curPosReg = self.client.read_input_registers(7100, 12)
        return self.decode(curPosReg)



def decode(input):
        pos_x = BinaryPayloadDecoder.fromRegisters(input.registers[0:2], Endian.Big).decode_32bit_float()
        pos_y = BinaryPayloadDecoder.fromRegisters(input.registers[2:4], Endian.Big).decode_32bit_float()
        pos_z = BinaryPayloadDecoder.fromRegisters(input.registers[4:6], Endian.Big).decode_32bit_float()
        rot_x = BinaryPayloadDecoder.fromRegisters(input.registers[6:8], Endian.Big).decode_32bit_float()
        rot_y = BinaryPayloadDecoder.fromRegisters(input.registers[8:10], Endian.Big).decode_32bit_float()
        rot_z = BinaryPayloadDecoder.fromRegisters(input.registers[10:12], Endian.Big).decode_32bit_float()
        return [pos_x, pos_y, pos_z, rot_x, rot_y, rot_z]


if __name__ == '__main__':
    #initialise ROS
    rclpy.init(args=sys.argv)

    #initialise the Modbus client
    host = '192.168.2.10'
    port_modbus = 502
    client = ModbusTcpClient(host, port_modbus)
    client.connect()


    print(get_base())
"""
